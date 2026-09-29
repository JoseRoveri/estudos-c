#include <stdio.h>

int main(){
    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    if(dia == 1 || dia == 7){
        printf("FINAL DE SEMANA\n");
    }else{
        printf("DIA UTIL\n");
    }

    return 0;
}