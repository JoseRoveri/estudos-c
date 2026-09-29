#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\nDobro: %d\n", numero * 2);
    printf("Triplo: %d\n", numero * 3);
    printf("Metade: %.2f\n", (float)numero / 2);

    return 0;
}