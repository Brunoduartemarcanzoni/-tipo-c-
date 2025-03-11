#include <stdio.h>

int main(){
    int numero = 8;
    int palpite;
    printf("adivinhe o número: ");
    scanf("%d", &palpite);
    if(palpite==numero){
        printf("você acertou!");
    }else{
        printf("você errou!");
    }
}