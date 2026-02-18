#include <stdio.h>
#include <stdlib.h>
void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}
void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}


int main()
{

    int N,i,cont;
    double porcentagem,somaalturas;

    printf("Quantas pessoas serao digitadas?:");
    scanf("%d", &N);

    char vetnome[N][50];
    int vetidade[N];
    double vetaltura[N];


    for(i=0 ; i< N ; i++){

       printf("Dados da %d a pessoa:\n", i+ 1);
       printf("Nome:");
       limpar_entrada();
       ler_texto(vetnome[i], 50);
       printf("Idade:");
       scanf("%d", &vetidade[i]);
       printf("Altura:");
       scanf("%lf", &vetaltura[i]);

    }

    somaalturas=0;
    printf("\n");

    for (i = 0; i<N ; i++){

    somaalturas= somaalturas + vetaltura[i];
  }

   printf("MEDIA ALTURAS: %.2lf", somaalturas/N);

   printf("\n");
   cont=0;
   for(i=0; i < N ; i++){

    if (vetidade[i]< 16){
       cont= cont + 1;

    }
   }

    if( cont > 0){
   porcentagem = (double) cont * 100/ N;

   printf("MEDIA DE PESSOAS COM MENOS DE 16 ANOS: %.21lf %%\n", porcentagem );

   }
   else {

    printf("NENHUMA PESSOA MENOR DE 16 ANOS");
   }

   for(i=0; i<N ; i++){

    if(vetidade[i]< 16){

      printf("%s\n", vetnome[i]);
    }

   }


    return 0;
}
