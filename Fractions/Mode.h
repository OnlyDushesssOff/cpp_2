#pragma once
#include "Fractions.h"
#include <iostream>
#include "Complex.h"
#include "Quadratic.h"

void Fractions_Parts(){
    std::cout << "Print: ";
    int num;
    int denom;
    std::cin >> num;
    std::cin >> denom;
    Fractions fract = Fractions(num, denom);
    fract.Print();
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

void Quadratic_Yrav(){
    int32_t first_num, second_num, third_num = 0;
    int32_t first_denom, second_denom, third_denom = 1;

    std::cout << "Enter the first coefficient:";
    std::cin >> first_num >> first_denom;
    std::cout << "Enter the second coefficient:";
    std::cin >> second_num >> second_denom;
    std::cout << "Enter the third coefficient:";
    std::cin >> third_num >> third_denom;

    Fractions fract_quad1 = Fractions(first_num, first_denom);
    Fractions fract_quad2 = Fractions(second_num, second_denom);
    Fractions fract_quad3 = Fractions(third_num,third_denom);
    Quadratic quad1 = Quadratic(fract_quad1, fract_quad2, fract_quad3);

    std::cout << quad1 << std::endl << "x1 = " << quad1.Getx1() << std::endl << "x2 = " << quad1.Getx2();
}