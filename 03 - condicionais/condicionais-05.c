#include <stdio.h>

int main(){
    int a;
    int b;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("\n1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    printf("\nEscolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Resultado: %d\n", a + b);
            break;

        case 2:
            printf("Resultado: %d\n", a - b);
            break;

        case 3:
            printf("Resultado: %d\n", a * b);
            break;

        case 4:
            if(b != 0){
                printf("Resultado: %.2f\n", (float)a / b);
            }else{
                printf("Nao e possivel dividir por zero.\n");
            }
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}