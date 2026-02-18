#include <stdio.h>
#include <stdlib.h>

int main()
{
   int M,N,i,j;

    printf("Quantas linhas tera a matriz?:");
    scanf("%d", &M);

    printf("Quantas colunas tera a matriz?:");
    scanf("%d", &N);

    double mat[M][N];
    double vet[M];

    for( i=0 ; i < M;i++){
         printf("Digite os elementos da %d linha:\n", i+1);
         for( j=0; j < N; j++){

          scanf("%lf" ,&mat[i][j]);

        }
    }

    for( i=0 ; i < M;i++){
        vet[i] = 0;
        for( j=0; j < N; j++){
            vet[i] = vet[i] + mat [i] [j];

        }
    }

    printf("VETOR GERADO\n");

    for( i=0 ; i < M;i++){
        printf("%.1lf\n" ,  vet[i]);

    }

    return 0;
}


