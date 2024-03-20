#pragma once
#include <iostream>
#include <cstdint>
#include <cmath>

class Fractions{
private:
    int32_t _num;
    int32_t _denom;

    void NOD();
    void Add(double fract);    
public:
    Fractions();
    Fractions(int32_t num);
    Fractions(int32_t num, int32_t denom); 
    Fractions(double fract);

    void Print();

    friend std::ostream& operator<< (std::ostream& os, const Fractions& tmp){
        if(tmp._num != 0){
            if(tmp._denom != 1){
                os << tmp._num << "/" << tmp._denom;
            }else{
                os << tmp._num;
            }
        }else{
            os << 0;
        }
        return os;
    }   
    Fractions operator=(const Fractions& fractions){
        _num = fractions._num;
        _denom = fractions._denom;
        return *this;
    }

    Fractions operator+(const Fractions& fractions) const {
        int32_t new_num = _num * fractions._denom + _denom * fractions._num;
        uint32_t new_denom = _denom * fractions._denom;
        Fractions res = Fractions(new_num, new_denom);
        return res;
    }

    Fractions operator-(const Fractions& fractions) const {
        int32_t new_num = _num * fractions._denom - _denom * fractions._num;
        uint32_t new_denom = _denom * fractions._denom;
        Fractions res = Fractions(new_num, new_denom);
        return res;
    }

    Fractions operator*(const Fractions& fractions) const {
        int32_t new_num = _num * fractions._num;
        uint32_t new_denom = _denom * fractions._denom;
        Fractions res = Fractions(new_num, new_denom);
        return res;
    }

    Fractions operator/(const Fractions& fractions) const {
        int32_t new_num = _num * fractions._denom;
        uint32_t new_denom = _denom * fractions._num;
        Fractions res = Fractions(new_num, new_denom);
        return res;
    }

    bool operator> (const Fractions& fractions) const {
        int32_t new_num1 = _num * fractions._denom;
        int32_t new_num2 = fractions._num * _denom;
        return new_num1 > new_num2;
    }

    bool operator< (const Fractions& fractions) const {
        int32_t new_num1 = _num * fractions._denom;
        int32_t new_num2 = fractions._num * _denom;
        return new_num1 < new_num2;
    }

    bool operator>= (const Fractions& fractions) const {
        int32_t new_num1 = _num * fractions._denom;
        int32_t new_num2 = fractions._num * _denom;
        return new_num1 >= new_num2;
    }
    
    bool operator<= (const Fractions& fractions) const {
        int32_t new_num1 = _num * fractions._denom;
        int32_t new_num2 = fractions._num * _denom;
        return new_num1 <= new_num2;
    }

    bool operator!= (const Fractions& fractions) const {
        int32_t new_num1 = _num * fractions._denom;
        int32_t new_num2 = fractions._num * _denom;
        return new_num1 != new_num2;
    }

    bool operator== (const Fractions& fractions) const {
        int32_t new_num1 = _num * fractions._denom;
        int32_t new_num2 = fractions._num * _denom;
        return new_num1 == new_num2;
    }

    Fractions operator~ () const {
        Fractions res = Fractions(_num * -1, _denom);
        return res;
    }

    Fractions operator++ (){
        _num += _denom;
        return *this;
    }

    Fractions operator++ (int number) {
        Fractions copy = Fractions(_num, _denom);
        _num += _denom;
        return copy;
    }

    Fractions operator-- (){
        _num -= _denom;
        return *this;
    }

    Fractions operator-- (int number) {
        Fractions copy = Fractions(_num, _denom);
        _num -= _denom;
        return copy;
    }

    Fractions operator^ (const double& step) const{
        float des_num = round(pow(_num, step)*5) / 5;
        Fractions chis = Fractions(des_num);
        float des_denom = round(pow(_denom, step)*5) / 5;
        Fractions znam = Fractions(des_denom);
        int32_t new_num = chis._num * znam._denom;
        int32_t new_denom = chis._denom * znam._num;
        Fractions res = Fractions(new_num, new_denom);
        return res;
    }
};
