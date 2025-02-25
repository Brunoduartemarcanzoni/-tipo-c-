1-
#include <stdio.h>

int main()
{
    int idade;
    printf("digite sua idade: ");
    scanf ("%d", &idade);
    if(idade>=18){
        printf("entre na festa");
    }
    else{
    printf("vá pra casa");
    }
    return 0;
}