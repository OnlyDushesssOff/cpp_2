#pragma once
#include <cstdint>
#include "Complex.h"

class Quadratic{
private:
    Fractions _older;
    Fractions _mider;
    Fractions _liberty;
    
    Complex _x1;
    Complex _x2;

    void Disctiminant();
public:

    inline Complex Getx1(){
        return _x1;
    }
    inline Complex Getx2(){
        return _x2;
    }

    Quadratic();
    Quadratic(Fractions _older, Fractions _mider, Fractions _liberty);

    friend std::ostream& operator<< (std::ostream& os, const Quadratic& tmp){
        os << tmp._older << "x^2";
        if(tmp._mider < 0){
            os << " - " << ~tmp._mider << "x";
        }else{
            os << " + " << tmp._mider << "x";
        }
        if(tmp._liberty < 0){
            os << " - " << ~tmp._liberty;
        }else{
            os << " + " << tmp._liberty;
        }
        return os;
    }
};