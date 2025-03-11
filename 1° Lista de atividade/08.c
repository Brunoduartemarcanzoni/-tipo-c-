#include <stdio.h>

int main(){
    int n = 100;
    while(n<=100 && n>=1){
        if(n%7==0){
            printf(" %d", n);
        }
        n = n - 1;
    }
    return 0;
}
