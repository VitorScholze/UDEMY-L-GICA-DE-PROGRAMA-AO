#include <iostream>

using namespace std;

int main()
{

    int x1, x2, x3, menor;

    cout<<"Primeiro numero:";
    cin>> x1;
    cout<<"Segundo numero:";
    cin>> x2;
    cout<<"Terceiro numero:";
    cin>>x3;


    if (x1<x2 && x1<x3){

       menor = x1;

    }
    else if ( x2<x1 && x2<x3){

     menor = x2;
    }
    else {
        menor = x3;
    }

    cout<< "MENOR NUMERO:"<< menor;


    return 0;
}
