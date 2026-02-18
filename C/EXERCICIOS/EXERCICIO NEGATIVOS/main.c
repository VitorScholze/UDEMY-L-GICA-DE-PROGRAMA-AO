#include <stdio.h>
#include <stdlib.h>

int main()
{

  int N , x, i;

  printf("Quantos numeros voce ira digitar?");
  scanf("%d", &N);

  int vet[N];

  for(i=0; i < N ; i++){

    printf("Digite um Numero:");
    scanf("%d", &vet[i]);
}
    printf("NUMEROS NEGATIVOS:\n");

    for(i=0; i < N ; i++){

    if(vet[i] < 0){

      printf("%d\n", vet[i])  ;

    }
}

    return 0;
}
