#include <stdio.h>
#include <stdlib.h>

int factorial (int x){
    if(x == 0){
        return 1;
    }

    return (x*factorial(x-1));
}


int main(){
    int n;

    printf("Digite o numero que deseja fazer o fatorial\n");
    scanf("%d", &n);
    printf("O fatorial de %d eh %d",n, factorial(n));

    return 0;
}


