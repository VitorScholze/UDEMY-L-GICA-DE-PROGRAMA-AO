#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int N,i, cont;
    double porcentagem, somaaltura,media;



    cout<<"Quantas pessoas serao digitadas?:";
    cin>> N;

    string vetnome[N];
    int vetidade[N];
    double vetaltura[N];

    for (i = 0; i < N; i++){
        cout<<"Digite os dados da " << i + 1 << " pessoa:"<<endl;
        cout<<"NOME:";
        cin.ignore(INT_MAX, '\n');
        getline(cin,vetnome[i]);
        cout<<"IDADE:";
        cin >> vetidade[i];
        cout<<"ALTURA:";
        cin >> vetaltura[i];
        cout<<endl;
    }

   somaaltura = 0;

   for(i = 0; i < N; i ++){
       somaaltura = somaaltura + vetaltura[i] ;
   }
    cout<<fixed<<setprecision(2);
   media = somaaltura / N ;

   cout<<" Altura media:" << media << endl;

   cont=0;
   for(i = 0; i < N ; i++){

    if(vetidade[i] < 16){
        cont = cont + 1;

    }
    }
        if(cont == 0){

            cout<< "NENHUMA PESSOA COM MENOS DE 16 ANOS";
        }
        else{
            porcentagem = (cont * 100.0) / N;

    cout<<"Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;

        }


    for(i = 0; i < N; i++){

        if(vetidade[i] < 16){

            cout<< vetnome[i]<<endl;
        }
    }


    return 0;
}
