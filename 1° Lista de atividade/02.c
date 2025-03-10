#include <stdio.h>

int main(){
    int num;
    printf("digite um número: ");
    scanf("%d", &num);
    if(num<0){
        printf("%d é negativo", num);
    }else if(num>0){
        printf("%d é positivo", num);
    }else{
        printf("%d é 0 né porraa", num);
    }
}