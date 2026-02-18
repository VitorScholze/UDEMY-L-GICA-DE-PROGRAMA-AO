#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    double media;
    int idade1, idade2;
    char nome1[50], nome2[50];

    printf("Dados da primeira pessoa\n");
    printf("Nome: ");
    fgets(nome1, 50, stdin);
    strtok(nome1, "\n");

    printf("Idade: ");
    scanf("%d", &idade1);

    limpar_entrada(); // limpa o ENTER do scanf

    printf("\nDados da segunda pessoa\n");
    printf("Nome: ");
    fgets(nome2, 50, stdin);
    strtok(nome2, "\n");

    printf("Idade: ");
    scanf("%d", &idade2);

    media = (idade1 + idade2) / 2.0;

    printf("A idade media entre %s e %s e de %.1lf anos", nome1, nome2, media);

    return 0;
}


