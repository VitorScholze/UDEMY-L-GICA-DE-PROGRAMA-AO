#include <iostream>

using namespace std;

int main()
{
    int  x1, x2;

    cout<<"Digite dois numeros:"<< endl;
    cin >> x1;
    cin >> x2;

    while(x1 != x2){

    if(x1>x2){
      cout<< " DECRESCENTE! " <<endl;
    }
    else{
        cout<< " CRESCENTE! "<<endl;
    }
    cout<< "Digite outros dois numeros:"<<endl;
    cin>> x1;
    cin >> x2;
}



    return 0;
}
