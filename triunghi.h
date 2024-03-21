#pragma once


class Entitate
{
private:
    float a, b, c;
public:
    Entitate();
    Entitate(float x, float y, float z);
    Entitate(const Entitate &t);

    float getlatura1();
    float getlatura2();
    float getlatura3();
    void setlatura1(float x);
    void setlatura2(float y);
    void setlatura3(float z);

    ~Entitate();

    bool estetriunghi(float a, float b, float c);
    float perimetru(float a, float b, float c);
    float aria(float a, float b, float c);
    void destroy();

};







