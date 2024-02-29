#include "Fractions.h"
#include <iostream>

int main(){

    int mod;
    std::cout << "what do you want to enter: 1 - if a fraction by parts, 2 - if a decimal fraction" << std::endl;
    std::cin >> mod;
    if(mod == 1){
        std::cout << "Print: ";
        int num;
        int denom;
        std::cin >> num >> denom;
        if(denom != 0){
            Fractions fract = Fractions(num, denom);
        }else{
            std::cout << "Divide by zero!";
            return 1;
        }
    }else if(mod == 2){
        std::cout << "Print: ";
        double number;
        std::cin >> number;
        Fractions fract = Fractions(number);
    }else{
        std::cout << "Error: Input Error";
        return 1;
    }
}
