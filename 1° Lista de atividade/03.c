#include <stdio.h>

int main(){
    int n = 20;
    while(n<=20 && n>=1){
        if(n%2==0){
            printf(" %d", n);
        }
        n = n - 1;
    }
    return 0;
}