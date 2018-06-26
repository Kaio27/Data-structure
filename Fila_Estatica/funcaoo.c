#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void inicializarFila(FILA *f){
    f->inicio = 0;
    f->numeroelem = 0;
}

int tamanhoFila(FILA *f){
    return f->numeroelem;
}

void inserirElemFila(FILA *f, REGISTRO reg){
    int posicao = 0;
    if(f->numeroelem >= MAX){
        printf("\nFila cheia, nao eh possivel incluir na fila");
        return;
    }

    posicao = (f->inicio + f->numeroelem) % MAX;

    f->A[posicao] = reg;
    f->numeroelem = f->numeroelem + 1;

}

void exibirFila(FILA *f){

    int cont;
    printf("\nFila: ");

    for(cont = 0; cont < f->numeroelem; cont++){
        printf(" [%d] = %d ", cont, f->A[(f->inicio+cont)%MAX].chave);

    }
}

int buscar(FILA *f, TIPOCHAVE chave){
    int i;

    for(i = 0; i < f->numeroelem; i++){
        if(chave == f->A[(f->inicio+i) % MAX].chave){
            printf("\nElemento encontrado na posicao %d", i);
            return((f->inicio+i) % MAX);
        }
    }
    printf("\nElemento nao encontrado");
    return (-1);
}

void excluirElemFila(FILA *f){
    if(f->numeroelem == 0){
        printf("\nFila vazia, nao ouve exclusao");
    }

    f->inicio = (f->inicio + 1 ) % MAX;
    f->numeroelem = f->numeroelem-1;

}

void reinicializar(FILA *f){
    inicializarFila(f);
}
