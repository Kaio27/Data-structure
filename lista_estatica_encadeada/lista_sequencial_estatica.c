#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "lista_sequencial_estatica.h"


void inicializa_lista(LISTA *l){
    l->numeroElem = 0;
}


int tamanho(LISTA *l){
    return l->numeroElem;
}

void exibirLista(LISTA *l){
    int i;
    printf("\nLista:  " "");
    for(i=0; i < l->numeroElem; i++){
        printf("\n [pos=%d,valor=%d]", i, l->A[i].chave);

    }
}


 void inserirElemLista(LISTA *l, REGISTRO elem){
    int j;
    if(l->numeroElem >= MAX){
        printf("\nLista cheia (nao inseriu)");
        return;
    }

    for(j=l->numeroElem; j>0 && elem.chave < l->A[j-1].chave; j--){

            l->A[j] = l->A[j-1];


    }
    l->A[j] = elem;
    l->numeroElem = l->numeroElem+1;


 }

 int buscaSequencial(LISTA *l, TIPOCHAVE chave){
    int j;
    if(l->numeroElem == 0){
        printf("\nLista esta vazia)");
        return - 1;
    }
    for(j=0; j<l->numeroElem && chave != l->A[j].chave && chave > l->A[j].chave; j++){
        if(j< l->numeroElem && chave == l->A[j].chave){
            return j;
        }else {
            return -1;
        }
    }
    return -1;
 }


 int buscaBinaria(LISTA *l, TIPOCHAVE ch, int inicio, int fim){
    int meio;

    meio = floor((inicio+fim)/2);
    while(inicio <= fim && l->A[meio].chave != ch){
        if(l->A[meio].chave > ch){
            fim = meio - 1;

        }else{
            inicio = meio + 1;
        }
        meio = floor((inicio+fim)/2);
    }

    if(meio >= 0 && l->A[meio].chave == ch){
        return meio;
    }
    return -1;

 }
 int buscaBinariaRecursiva(LISTA *l, TIPOCHAVE ch, int inicio, int fim){
    int meio = (inicio + fim) / 2;
    if(l->A[meio].chave == ch){
        return meio;
    }
    if(inicio >= fim){
        return -1;
    }else{

    if(l->A[meio].chave < ch){
      return buscaBinariaRecursiva(l, ch, meio + 1, fim);
    }else{
      return buscaBinariaRecursiva(l, ch, inicio, meio - 1);
    }

    }
 }

 void excluir(LISTA *l, TIPOCHAVE ch){
    int pos, j;
    if((pos = buscaBinaria(l, ch, 0, l->numeroElem-1)) == -1){
        printf("Não foi pssivel excluir");
        return;
    }

    for(j = pos; j < l->numeroElem-1; j++){
        l->A[j] = l->A[j+1];
    }
    l->numeroElem = l->numeroElem-1;
    printf("\nO elemento %d foi excluido", ch);
 }





