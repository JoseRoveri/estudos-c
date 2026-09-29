#include <stdio.h>

int main(){
    char inicial;
    int idade;
    float altura;

    printf("Digite a primeira letra do seu nome: \n");
    scanf(" %c", &inicial);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("\nInicial: %c\n", inicial);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    return 0;
}