#include "Fractions.h"
#include "cmath"
#include <iomanip>


Fractions::Fractions(){
    _num = 0;
    _denom = 1;
}

Fractions::Fractions(double fract){
    _fract = fract;
}

Fractions::Fractions(int32_t num, int32_t denom){
    _num = num;
    _denom = _denom;
}

void Fractions::Add(){
    double ez = 0.0000000001;
    int flag = 1;
    int umn = 1;
    while(flag != 0){
        uint32_t num = static_cast<int>(fabs(_fract * umn));
        double ans = fabs(_fract * umn) - num;
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
    _num = _num / fabs(b);
    _denom = _denom / fabs(b);
}

void Fractions::Print(){
    int count = 0;
    if(fabs(_num) > fabs(_denom)){
        int numi = fabs(_num);
        while(numi > 0){
            numi = numi / 10;
            count +=1;
        }
    }else{
        int numi = fabs(_denom);
        while(numi > 0){
            numi = numi / 10;
            count +=1;
        }        
    }
    if(_denom < 0){
        _num *= -1;
        _denom *= -1;
    }
    if(_num < 0){count += 1;}
    std::cout <<std::endl<<"Answer:"<<std::endl<< std::endl<<std::setw(count)<< _num <<std::endl;
    for(int i = 0; i < count; i++){
        std::cout << "-";
    } 
    std::cout << std::endl;
    std::cout << std::setw(count) << _denom << std::endl <<std::endl;
}

void Fractions::Mod1(){        
    NOD();
    Print();   
}
void Fractions::Mod2(){
    Add();
    NOD();
    Print();
}