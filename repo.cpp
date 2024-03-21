#include "repo.h"
#include "triunghi.cpp"
#include<iostream>

using namespace std;

Repo::Repo()
{
    this->nr = 0;
}

void Repo::add(Entitate t)
{
    this->triunghi[this->nr++] = t;
}

void Repo::afisare()
{
    for(int i=0;i<nr;i++)
    {
        //Entitate t= triunghi[i];
       /* cout<<"Latura 1 a triunghiului"<<i+1<<" este "<< triunghi[i].getlatura1()<< endl;
        cout<<"Latura 2 a triunghiului"<<i+1<<" este "<< triunghi[i].getlatura2()<< endl;
        cout<<"Latura 3 a triunghiului"<<i+1<<" este "<< triunghi[i].getlatura3()<< endl;
        cout<<"Aria triunghiului"<< i+1<<" este "<<triunghi[i].aria(triunghi[i].getlatura1(), triunghi[i].getlatura2(), triunghi[i].getlatura3())<<endl;
        cout<<"Perimetrul triunghiului"<<i+1<<" este "<< triunghi[i].perimetru(triunghi[i].getlatura1(), triunghi[i].getlatura2(), triunghi[i].getlatura3())<<endl;
*/
    }
}
