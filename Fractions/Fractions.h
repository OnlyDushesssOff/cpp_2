#include <iostream>
#include <cstdint>

class Fractions{
private:
    int32_t _num;
    int32_t _denom;
    double _fract;
public:
    Fractions();
    Fractions(int32_t num, int32_t denom); 
    Fractions(double fract);

    void SetNum(int32_t newNum);
    void SetDenom(int32_t newDenom);
    void SetFract(double newFract);

    int32_t GetNum();
    int32_t GetDenom();
    double GetFract();

    void Print();
    void Add();
    void NOD();

};

