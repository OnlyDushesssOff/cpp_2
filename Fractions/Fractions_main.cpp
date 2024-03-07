#include "Fractions.h"
#include <iostream>
#include "Complex.h"

Fractions operator+(double left, const Fractions& right){
    Fractions fract = right + Fractions(left);
    return fract;
}

int main(){

    int mod;
    std::cout << "what do you want to enter: 1 - if a fraction by parts, 2 - if a decimal fraction" << std::endl;
    std::cin >> mod;
    if(mod == 1){
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
            return 1;
        }
    }else if(mod == 2){
        std::cout << "Print: ";
        double number;
        std::cin >> number;
        Fractions fract = Fractions(number);
        fract.Print();
    }else{
        std::cout << "Error: Input Error";
        return 1;
    }
    
    Fractions fract1 = Fractions(1, 2);
    Fractions fract2 = Fractions(6, 7);
    Complex comp = Complex(fract1, fract2);
    std::cout << comp << std::endl;
}
