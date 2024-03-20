#pragma once
#include "Quadratic.h"

Quadratic::Quadratic(){
    _older = 1;
    _mider = 0;
    _liberty = 0;
    Disctiminant();
}

Quadratic::Quadratic(Fractions a, Fractions b, Fractions c){
    _older = a;
    _mider = b;
    _liberty = c;
    Disctiminant();
}

void Quadratic::Disctiminant(){
    Fractions dis = (_mider^2) - _liberty * _older * 4;
    if(dis > 0){
        _x1 = Complex((~_mider - (dis^0.5))/(_older * 2),Fractions());
        _x2 = Complex((~_mider + (dis^0.5))/(_older * 2),Fractions());
    }else if(dis == 0){
        _x1 = Complex((~_mider + (dis^0.5))/(_older * 2),Fractions());
        _x2 = _x1;
    }else{
        _x1 = Complex(Fractions(),(~_mider - (~dis^0.5))/(_older * 2));   
        _x2 = Complex(Fractions(),(~_mider + (~dis^0.5))/(_older * 2));     
    }
}
