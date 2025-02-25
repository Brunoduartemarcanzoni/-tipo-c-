/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade;
    printf("digite sua idade: ");
    scanf ("%d", &idade);
    if(idade>=65){
        printf("buteco beber uma");
    }
    else if(idade>=18){
        printf("entre na festa");
    }
    else if(idade>12){
        printf("chore");
    }
    else{
        printf("espie por 5 min");
    }
    return 0;
}