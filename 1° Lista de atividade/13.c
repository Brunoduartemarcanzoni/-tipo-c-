#include <stdio.h>

int main(){
    int a;
    int b;
    printf("digite um numero: ");
    scanf("%d", &a);
    printf("digite outro numero: ");
    scanf("%d", &b);
    if(a=b){
        printf("seus numeros são iguais: ");
    }
    else{
        printf("seus numeros não são iguais");
    }
    return 0;
}