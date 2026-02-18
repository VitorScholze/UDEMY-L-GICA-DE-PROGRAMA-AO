#include <iostream>

using namespace std;

int main()
{

    int N , i, j,cont;

    cout<<"Qual a ordem da matriz:";
    cin>> N;

    int mat[N][N];



    for(i=0; i<N; i++){
      for(j=0; j<N; j++) {

        cout<< "ELEMENTO [" << i <<","<< j << "]:";
        cin>> mat[i][j];

      }
 }

    cout<<"DIAGONAL PRINCIPAL:"<,endl;
     for(i=0; i<N; i++){
      for(j=0; j<N; j++) {

        if( i == j){
          cout<<mat[i][j]<< " " ;
    }
    }
    }

    cout<<endl;

    cont=0;
    for(i=0; i<N; i++){
      for(j=0; j<N; j++) {

       if(mat[i][j]< 0){

        cont=cont + 1;
       }
    }
    }

    cout<<"QUANTIDADE DE NUMEROS NEGATIVOS:"<<cont;

    return 0;
}

