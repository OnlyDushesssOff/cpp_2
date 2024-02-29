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

    void Mod1();
    void Mod2();
    void Print();

};

