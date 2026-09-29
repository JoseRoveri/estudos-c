#include <stdio.h>

int main(){
    int ano;
    float peso;

    printf("Digite o ano atual: \n");
    scanf("%d", &ano);

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    printf("\nAno: %d\n", ano);
    printf("Peso: %.2f kg\n", peso);

    return 0;
}