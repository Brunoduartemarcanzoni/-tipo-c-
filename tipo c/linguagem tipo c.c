#include <stdio.h>

int main()
{
    int idade;
    printf("digite sua idade: ");
    scanf ("%d", &idade);
    if(idade<16){
        printf("chore");
    }
    else if(idade>=18){
        printf("entre na festa");
    }
    else{
        printf("espie por 5 min");
    }
    return 0;
}