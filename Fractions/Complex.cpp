#include "Complex.h"

Complex::Complex(){
    _re = Fractions();
    _im = Fractions();
}
Complex::Complex(Fractions re, Fractions im){
    _re = Fractions(re);
    _im = Fractions(im);
}

Complex::Complex(int32_t num_re, uint32_t denom_re, int32_t num, uint32_t denom){}