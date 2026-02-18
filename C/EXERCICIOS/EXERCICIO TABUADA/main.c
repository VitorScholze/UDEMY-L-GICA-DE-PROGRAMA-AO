#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N,i,resul;



    printf("Deseja a tabuada para qual valor?:");
    scanf("%d", &N);




    for(i=1 ; i<=10 ; i++){
      resul= N * i;
      printf("%d x %d = %d\n", N , i , resul);


    }

    return 0;
}
