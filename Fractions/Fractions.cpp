#include "Fractions.h"

void Fractions::SetDenom(int32_t newDenom){
    if (newDenom == 0)
        throw "Divide by zero!";
    _denom = newDenom;
}

void Fractions::SetNum(int32_t newNum){
    _num = newNum;
}

void Fractions::SetFract(double newFract){
    _fract = newFract;
}

Fractions::Fractions(){
    _num = 0;
    _denom = 1;
}

Fractions::Fractions(double fract){
    _fract = fract;
}

Fractions::Fractions(int32_t num, int32_t denom){
    _num = num;
    SetDenom(denom);
}

void Fractions::Add(){
    double ez = 0.0000000001;
    int flag = 1;
    int umn = 1;
    while(flag != 0){
        int num = static_cast<int>(_fract * umn);
        double ans = _fract * umn - num;
        if(ans > ez){
            umn *= 10;
        }else{
            flag = 0;
        }
    }
    _num = _fract * umn;
    _denom = umn;
}

void Fractions::NOD(){
    int32_t a = _num;
    int32_t b = _denom;
    int32_t r = a%b;
    while(r != 0){
        a = b;
        b = r;
        r = a%b;
    }
    _num = _num / b;
    _denom = _denom / b;
}

void Fractions::Print(){
    int count = 0;
    if(_num > _denom){
        int numi = _num;
        while(numi > 0){
            numi = numi / 10;
            count +=1;
        }
    }else{
        int numi = _denom;
        while(numi > 0){
            numi = numi / 10;
            count +=1;
        }        
    }
    std::cout <<std::endl<<"Answer:"<<std::endl<< std::endl<< _num <<std::endl;
    for(int i = 0; i < count; i++){
        std::cout << "-";
    } 
    std::cout << std::endl << _denom << std::endl<<std::endl;
}