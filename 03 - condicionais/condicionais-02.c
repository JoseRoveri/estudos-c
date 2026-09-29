#include <stdio.h>

int main(){
    int nota;

    printf("Digite sua nota: ");
    scanf("%d", &nota);

    if(nota >= 7){
        printf("APROVADO\n");
    }else if(nota >= 5){
        printf("RECUPERACAO\n");
    }else{
        printf("REPROVADO\n");
    }

    return 0;
}