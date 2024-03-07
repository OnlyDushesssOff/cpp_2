#pragma once// лучше использовать, чтобы избежать проблемы циклирования компилирования
#include "Fractions.h"

class Complex{
private:
    Fractions _re;
    Fractions _im;
public:
    Complex();
    Complex(Fractions re, Fractions im);
    Complex(int32_t num_re, uint32_t denom_re, int32_t num, uint32_t denom);

    friend std::ostream& operator<< (std::ostream& os, const Complex& tmp){
        os << tmp._re;
        if(tmp._im > 0){
            os << " + " << tmp._im<< "i" <<std::endl;
        }
        else{
            os << " - " << tmp._im<< "i" <<std::endl;
        }
        return os;
    }   
};
/*класс кводратных уровнений
корни и коэфициенты могут быть как дробные, так и комплексные, так что вышереализованные классы нужно тоже использовать*/
