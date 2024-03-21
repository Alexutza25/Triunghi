#include "triunghi.cpp"
#include "teste.cpp"
#include "menu.cpp"
#include <iostream>

using namespace std;


/** TRIUNGHI
trei atribute float
verificam daca au sens sa fie laturi
perimetrul
aria cu formula lui heron
**/

int main()
{
    myTests();
    menu();
    return 0;
}




/*Entitate t1(3, 4, 5);
    Entitate t2(7, 7, 7);
    Entitate t3(7, 11, 9);
    Entitate t4(6, 8, 100);
    float lat1[4] ={3, 7, 7, 6};
    float lat2[4] = {4, 7, 11, 8};
    float lat3[4] = {5, 7, 9, 100};
    Entitate triunghiuri[4] = {t1, t2, t3, t4};
    for(int i =0; i<4;i++)
        if(triunghiuri[i].estetriunghi(lat1[i], lat2[i], lat3[i]) == 1)
    {
        cout<<triunghiuri[i].estetriunghi(lat1[i], lat2[i], lat3[i])<<" ";
        cout<<triunghiuri[i].perimetru(lat1[i], lat2[i], lat3[i])<<" ";
        cout<<triunghiuri[i].aria(lat1[i], lat2[i], lat3[i])<<" ";
        cout<<endl;
    }
    cout<<endl;
    cout<<t1.getlatura1()<<endl;
    t1.setlatura1(3.5);
    cout<<t1.getlatura1()<<endl;
    cout<<t2.getlatura2()<<endl;
    cout<<t1.perimetru(3, 4, 5)<<endl;
    cout<<t1.aria(3, 4, 5)<<endl;*/
