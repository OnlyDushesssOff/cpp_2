#pragma once
#include "Fractions.h"
#include <iostream>
#include "Complex.h"
#include "Mode.h"

void Fractions_Parts(){
    std::cout << "Print: ";
    int num;
    int denom;
    std::cin >> num;
    std::cin >> denom;
    if(denom != 0){
        Fractions fract = Fractions(num, denom);
        fract.Print();
     }else{
        std::cout << "Divide by zero!";
    }
}

void Fractions_Desimal(){
    std::cout << "Print: ";
    double number;
    std::cin >> number;
    Fractions fract = Fractions(number);
    fract.Print();
}

void Input_Error(){
    std::cout << "Error: Input Error";
    exit(1);
}