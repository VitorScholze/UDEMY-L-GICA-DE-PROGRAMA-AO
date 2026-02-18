#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}


int main()
{

    double largura, comprimento , area, valor,valortotal;

    printf("Qual a largura do terreno?:");
    scanf("%lf", &largura);

    printf("Qual o comprimento do terreno?:");
    scanf("%lf", &comprimento);

    printf("Qual o valor por metro quadrado?:");
    scanf("%lf", &valor);

    area = largura * comprimento ;
    valortotal = comprimento * valor;

    printf("Area Total: %.2lf" ,area);
    printf("\n");
    printf("Valor Total do terreno: %.2lf" ,valortotal);



    return 0;
}
