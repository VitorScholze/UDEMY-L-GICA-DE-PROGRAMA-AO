#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N,i,j,cont;


    printf("Qual sera a ordem da matriz?");
    scanf("%d",&N);

    int mat[N][N];

    for(i=0 ; i < N ; i++){
        for(j=0; j < N ; j++){

            printf("ELEMENTO : [%d ,%d]:", i, j);
            scanf( "%d", &mat[i][j]);
        }
    }

    printf("\n");
    printf("DIAGONAL PRINCIPAL: \n");

    for(i=0 ; i < N ; i++){
        for(j=0; j < N ; j++){

        if(i == j){
            printf("%d " ,mat[i][j]);

        }
    }
    }
    printf("\n");
    cont=0;

    for(i=0 ; i < N ; i++){
        for(j=0; j < N ; j++){

        if(mat[i][j]< 0){
            cont=cont+1 ;

        }
    }
    }

    printf("QUANTIDADE DE NEGATIVOS: %d", cont);

    return 0;
}
