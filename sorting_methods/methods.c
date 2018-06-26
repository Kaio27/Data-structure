#include <stdio.h>
#include <stdlib.h>
#include "methods.h"

void bubbleSort(int *vetor, int n){
    int fim = n - 1;
    int i;
    int aux;
    int continua = 0;

    do{
        for(i = 0; i < fim; i++){
            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
        fim--;
    }while(continua != fim);

}

void bubbleSortOtimizado (int *vetor, int n){
    int fim = n - 1;
    int i;
    int aux;
    int continua;

    do{
        continua = 0;
        for(i = 0; i < fim; i++){
            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                continua = 1;
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
        fim--;
    }while(continua != 0);
}


void insertionSort (int *vetor, int n){ // j é o elemento que quer ser inserido
    int i, j, k, aux;                   // guarda o j no auxiliar
    if(n == 1){
        return;
    }
    for(i = 0 ; i < n-1; i++){

        j = i + 1;
        aux = vetor[j];

        for(k = i; k >= 0 && aux < vetor[k]; k--){
            vetor[k+1] = vetor[k];

        }
        vetor[k+1] = aux;
    }
}

/*void selectionSort (int *vetor, int numero){
    int i, j, aux, min;
    for(i = 0; i < numero-1; i++){
        min = i;
        for(j = i+1; j < numero; j++){
            if(vetor[j] < vetor[min]){
                min = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[min];
        vetor[min] = aux;
    }
}*/
