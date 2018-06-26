#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void inicializar(FILA *f){
    f->inicio = NULL;
    f->fim = NULL;
    f->numElem = 0;
}

int imprimirNumeroElem(FILA *f){
    return (f->numElem);

}

void exibirFila(FILA *f){
    if(f->inicio == NULL){
        printf("Fila vazia");
        return;
    }
    PONT i = NULL;
    i = f->inicio;
    while(i != NULL){
        printf("|%d", i->reg.chave);
        i = i->prox;
    }
    printf("|\n");

}


void inserirElemFila(FILA *f, REGISTRO reg){
    PONT novo = NULL;
    novo = (PONT) malloc(sizeof(ELEMENTO));

    if(novo == NULL){
        printf("Nao alocou memoria");
        return;
    }

    novo->reg = reg;
    novo->prox = NULL;

    if(f->fim == NULL){
        f->inicio = f->fim = novo;

    }else{

        f->fim->prox = novo;
        f->fim = novo;
    }

    f->numElem = f->numElem+1;

}

/*void excluirElemFila(FILA *f){
    if(f->inicio == NULL){
        printf("Não foi possivel excluir");
    }
    PONT i = f->inicio;
    f->inicio = i->prox;
    free(i);

}


void reinicializarFila(FILA *f){
    PONT i = f->inicio;
    PONT aux;
    while(i != NULL){
        aux = i;
        i = i->prox;
        free(aux);
    }
    f->inicio = NULL;
    f->fim = NULL;
}*/

int excluir(FILA *f){
    PONT aux = f->inicio;

    if(aux == NULL) {
        return (0);
    }

    f->inicio = aux->prox;

    if(f->inicio==NULL) {

        f->fim = NULL;
    }

    free(aux);

    f->numElem = f->numElem-1;
    return(1);
}
void reinicializar(FILA *f){
    while(excluir(f));
}
