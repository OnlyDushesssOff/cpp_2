#pragma once
#include <iostream>
#include <cstdint>

class Fractions{
private:
    int32_t _num;
    int32_t _denom;
    double _fract;

    void NOD();
    void Add();    
public:
    Fractions();
    Fractions(int32_t num, int32_t denom); 
    Fractions(double fract);

    int32_t GetNum();
    int32_t GetDenom();
    double GetFract();

    void Print();

    friend std::ostream& operator<< (std::ostream& os, const Fractions& tmp){
        os << tmp._num << " / " << tmp._denom << std::endl;
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
        int32_t new_num = _num * fractions._denom + _denom * fractions._num;
        uint32_t new_denom = _denom * fractions._denom;
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
};
