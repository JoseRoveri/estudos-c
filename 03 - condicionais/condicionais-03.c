#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 60){
        printf("IDOSO\n");
    }else if(idade >= 18 && idade <= 59){
        printf("ADULTO\n");
    }else if(idade >= 12 && idade <= 17){
        printf("ADOLESCENTE\n");
    }else{
        printf("CRIANCA\n");
    }

    return 0;
}