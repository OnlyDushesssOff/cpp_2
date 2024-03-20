#pragma once// лучше использовать, чтобы избежать проблемы циклирования компилирования
#include "Fractions.h"
#include <cstdint>

class Complex{
private:
    Fractions _re;
    Fractions _im;
public:

    Complex();
    Complex(Fractions re, Fractions im);
    Complex(int32_t num_re, uint32_t denom_re, int32_t num, uint32_t denom);

    friend std::ostream& operator<< (std::ostream& os, const Complex& tmp){
        if(tmp._re != 0 && tmp._im != 0){
            os << tmp._re;
            if(tmp._im > 0){
            os << " + " << tmp._im<< "i" <<std::endl;
            }
            else if(tmp._im < 0){
                os << " - " << ~tmp._im<< "i" <<std::endl;
            }
        }else if(tmp._re == 0){
            if(tmp._im > 0){
            os << tmp._im<< "i" <<std::endl;
            }
            else if(tmp._im < 0){
                os << " - " << ~tmp._im<< "i" <<std::endl;
            }            
        }else if(tmp._im == 0){
            os << tmp._re;
        }
        return os;
    }

    Complex operator= (const Complex& complex){
        _re = complex._re;
        _im = complex._im;
        return *this;
    }

    Complex operator+ (const Complex& complex) const{
        Fractions new_re = _re + complex._re;
        Fractions new_im = _im + complex._im;
        Complex res = Complex(new_re, new_im);
        return res;
    } 

    Complex operator- (const Complex& complex) const{
        Fractions new_re = _re - complex._re;
        Fractions new_im = _im - complex._im;
        Complex res = Complex(new_re, new_im);
        return res;
    } 

    Complex operator* (const Complex& complex) const{
        Fractions new_re = _re * complex._re - _im * complex._im;
        Fractions new_im = _re * complex._im + _im * complex._re;
        Complex res = Complex(new_re, new_im);
        return res;
    } 

    Complex operator/ (const Complex& complex) const{
        Complex num = *this * Complex(complex._re, ~complex._im);
        Complex denom = complex * Complex(complex._re, ~complex._im);
        Complex res = Complex(num._re / denom._re, num._im / denom._re);
        return res;
    }  

    bool operator== (const Complex& complex) const{
        return _im == complex._im && _re == complex._re;
    } 

    bool operator!= (const Complex& complex) const{
        return _im != complex._im || _re != complex._re;
    } 

    Complex operator~ () const{
        Complex res = Complex(~_re, ~_im);
        return res;
    }
};
/*класс кводратных уровнений
корни и коэфициенты могут быть как дробные, так и комплексные, так что вышереализованные классы нужно тоже использовать*/
