#include <stdio.h>
#include <stdlib.h>

int fibonacci (int n){
    if (n == 1 || n == 0){
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}


int main(){
    int n;

    printf("Digite o numero que deseja fazer o fibonacci:\n");
    scanf("%d", &n);
    printf("O fibonacci de %d eh %d",n, fibonacci(n));

    return 0;
}
