#include <stdio.h>

int main(){
    int n;

    int m;
    printf("digite um numero: ");
    scanf("%d", &n);
    printf("digite um numero: ");
    scanf("%d", &m);
    if(n>m){
        printf("%d esse é o seu maior numero! ", n);
    }else if(m>n){
        printf("%d esse é o seu maior numero!", m);
    }
    return 0;
}
