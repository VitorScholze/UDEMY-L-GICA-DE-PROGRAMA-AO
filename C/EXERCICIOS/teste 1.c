#include <stdio.h>
#include <string.h>

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

double salario1, salario2;
char nome1[50], nome2[50];
int idade;
char sexo;


printf("Digite o nome da 1 pessoa");
ler_texto(nome1, 50);
printf("Digite o salario da 1 pessoa");
scanf("%lf" , &salario1);

printf("Digite o nome da 2 pessoa:");
limpar_entrada();
ler_texto(nome2 , 50);
printf("Digite o salario da 2 pessoa:");
scanf("%lf" , &salario2);

printf("Digite uma idade:");
scanf("%d" , &idade);

printf("Digite o sexo F/M:");
limpar_entrada();
scanf("%c", &sexo);


printf("Nome 1 : %s\n" ,nome1);
printf("Salario 1 : %.2lf\n" ,salario1);
printf("Nome 2 : %s\n" ,nome2);
printf("Salario 2: %.2lf\n", salario2);
printf("Idade: %d\n" , idade);
printf("Sexo: %c\n", sexo);

    return 0;
}
