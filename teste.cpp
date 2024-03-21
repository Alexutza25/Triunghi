#include <assert.h>
#include<iostream>

using namespace std;

void myTests()
{
    Entitate t1(3, 4, 5);
    assert(t1.perimetru(3, 4, 5) == 12);
    assert(t1.getlatura2() == 4);
    t1.setlatura1(1);
    t1.setlatura2(2);
    t1.setlatura3(58);
    assert(t1.estetriunghi(1,2,58) == false);
    assert(t1.aria(3,4,5) == 6.0);
    cout<<"Testele sunt ok!"<<endl;
}
