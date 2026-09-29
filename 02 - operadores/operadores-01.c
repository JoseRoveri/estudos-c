#include <stdio.h>

int main(){
    int a;
    int b;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);

    printf("\nSoma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao: %.2f\n", (float)a / b);
    printf("Resto: %d\n", a % b);

    return 0;
}