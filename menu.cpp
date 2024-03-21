#include <iostream>
#include "menu.h"
#include "triunghi.cpp"
#include "repo.cpp"

using namespace std;

Repo r;

void menu()
{
    float a, b, c;
    cout<<"1. Citire"<<endl<<"2. Afisare"<<endl<<"x. Iesire"<<endl<<"Dati optiunea: ";
    char opt;
    cin>>opt;
    while(opt != 'x')
    {
        switch(opt)
        {
        case '1':
            {
                cout<<"dati laturile: ";
                cin>>a>>b>>c;
                //Entitate t=new Entitate(a,b,c);
                r.add(t);
                break;
            }
        case '2':
            {
                r.afisare();
                break;
            }
        case 'x':
            {
                cout<<"Programul s-a incheiat";
                return;
            }
        default:
            {
                cout<<"Tasta gresita";
                break;
            }
        }
        cin>>opt;
    }
}
