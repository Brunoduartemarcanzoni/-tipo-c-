/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main(){
    int n;
    int i = 1;
    int r;
    printf("digite um número: ");
    scanf(" %d", &n);
    while(i<=10){
        r = n * i;
        printf(" %d * %d = %d\n", n, i, r);
        i = i + 1;
    }
    return 0;
}
