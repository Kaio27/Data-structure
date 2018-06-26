#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "methods.h"

int main(){

   int vetor[10] = {5, 10, 2, 4, 6, 1, 8, 11, 3, 7};

   int n = 10;
   int i;

   printf("\n ----- Antes da ordenacao\n");
   for(i = 0; i < n; i++){
    printf("\t%d", vetor[i]);
   }
   insertionSort(&vetor, n);

   printf("\n ----- Depois da ordenacao\n");
   for(i = 0; i < n; i++){
    printf("\t%d", vetor[i]);
   }
    return 0;
}
