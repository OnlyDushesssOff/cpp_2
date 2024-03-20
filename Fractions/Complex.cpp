#pragma once
#include "Complex.h"

Complex::Complex(){
    _re = Fractions();
    _im = Fractions();
}

Complex::Complex(Fractions re, Fractions im){
    _re = re;
    _im = im;
}

Complex::Complex(int32_t num_re, uint32_t denom_re, int32_t num, uint32_t denom){
    _re = Fractions(num_re, denom_re);
    _im = Fractions(num, denom);
}