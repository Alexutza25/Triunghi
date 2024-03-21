#include "triunghi.h"
#include <iostream>
#include <cmath>

using namespace std;

Entitate::Entitate()
{
    this->a = 0.0;
    this->b = 0.0;
    this->c = 0.0;
}

Entitate::Entitate(float x, float y, float z){
    this->a = x;
    this->b = y;
    this->c = z;
}

Entitate::~Entitate()
{
     std::cout<<"destructor"<<endl;
}

Entitate::Entitate(const Entitate&t)
{
    this->a = t.a;
    this->b = t.b;
    this->c = t.c;
}

float Entitate::getlatura1()
{
    return this->a;
}

float Entitate::getlatura2()
{
    return this->b;
}

float Entitate::getlatura3()
{
    return this->c;
}

void Entitate::setlatura1(float x)
{
    this->a = x;
}

void Entitate::setlatura2(float y)
{
    this->b = y;
}

void Entitate::setlatura3(float z)
{
    this->c = z;
}

bool Entitate::estetriunghi(float a, float b, float c)
{
    if (a*a<=b*b+c*c && b*b<=a*a+c*c && c*c<=a*a+b*b)
        return 1;
    return 0;
}

float Entitate::perimetru(float a, float b, float c)
{
    if(estetriunghi(a, b, c))
        return a+b+c;
}

float Entitate::aria(float a, float b, float c)
{
    float p = (a+b+c)/2.0;
    if(estetriunghi(a, b, c))
        return sqrt(p*(p-a)*(p-b)*(p-c));
}
