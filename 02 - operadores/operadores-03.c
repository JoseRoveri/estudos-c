#include <stdio.h>

int main(){
    float preco;
    float desconto;
    float valorFinal;

    printf("Digite o preco do produto: \n");
    scanf("%f", &preco);

    desconto = preco * 0.10;
    valorFinal = preco - desconto;

    printf("\nDesconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}