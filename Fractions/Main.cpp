#pragma once
#include "Fractions.h"
#include <iostream>
#include "Complex.h"
#include "Mode.h"
#include "Quadratic.h"

Fractions operator+(double left, const Fractions& right){
    Fractions fract = right + Fractions(left);
    return fract;
}

int main(){

    system("cls");
    int mod;
    std::cout << "what do you want to enter:" << std::endl<< "1 - a fraction by parts"<< std::endl<< "2 - a decimal fraction" << std::endl << "3 - quadratic equations" << std::endl<< "0 - Free mode" << std::endl<<std::endl;
    std::cin >> mod;
    if(mod == 1){
        Fractions_Parts();
    }else if(mod == 2){
        Fractions_Desimal();
    }else if(mod == 3){
        Quadratic_Yrav();    
    }else if(mod != 0){
        Input_Error();
    }else if(mod == 0){
        Fractions fract1 = Fractions(1, 9);
        Fractions fract2 = Fractions(5, 7);
        Complex comp1 = Complex(fract1, fract2);
        Fractions fract3 = Fractions(8, 3);
        Fractions fract4 = Fractions(7, 2);
        Complex comp2 = Complex(fract3, fract4);

        Fractions fract_quad1 = Fractions(1, 600);
        Fractions fract_quad2 = Fractions(-70, 600);
        Fractions fract_quad3 = Fractions(1);
        Quadratic quad1 = Quadratic(fract_quad1, fract_quad2, fract_quad3);
        std::cout << quad1 << std::endl << "x1 = " << quad1.Getx1() << std::endl << "x2 = " << quad1.Getx2();
    }
}
