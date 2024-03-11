#pragma once
#include "Fractions.h"
#include <iostream>
#include "Complex.h"
#include "Mode.h"

Fractions operator+(double left, const Fractions& right){
    Fractions fract = right + Fractions(left);
    return fract;
}

int main(){

    system("cls");
    char mod;
    std::cout << "what do you want to enter:" << std::endl<< "1 - if a fraction by parts"<< std::endl<< "2 - if a decimal fraction" << std::endl<< "0 - Free mode" << std::endl<<std::endl;
    std::cin >> mod;
    if(mod == 1){
        Fractions_Parts();
    }else if(mod == 2){
        Fractions_Desimal();
    }else if(mod != 0){
        Input_Error();
    }else if(mod == 0){
        Fractions fract1 = Fractions(1, 2);
        Fractions fract2 = Fractions(6, 7);
        Complex comp = Complex(fract1, fract2);
        std::cout << comp << std::endl;
    }
}
