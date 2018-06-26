#include <stdlib.h>
#include <stdio.h>
#include "funcao.h"


void inicializar(PILHA *p){
    p->topo = NULL;
}

int qtdElem(PILHA *p){
    int tamanho = 0;

    PONT fim = p->topo;

    while(fim != NULL){
        tamanho++;
        fim = fim->prox;
    }
    return tamanho;
}

void exibirPilhaDimanica(PILHA *p){
    PONT fim = p->topo;

    printf("\n Pilha: ");
    while(fim != NULL){
        printf("\n%d", fim->reg.chave);
        fim = fim->prox;
    }
    printf("\ \n");
}

int inserirPilha(PILHA *p, REGISTRO reg){
    PONT novo = (PONT) malloc(sizeof(ELEMENTO));
    novo->reg = reg;
    novo->prox = p->topo;
    p->topo = novo;
    return 0;
}

int excluirElemPilha(PILHA *p){
    if(p->topo == NULL){
        return -1;
    }
    PONT apagar = p->topo;
    p->topo = p->topo->prox;
    free(apagar);
    return 0;
}


void reinicializarPilha(PILHA *p){
    PONT posicao = p->topo;
    while(posicao != NULL){
        PONT apagar = posicao;
        posicao = posicao->prox;
        free(apagar);
    }
    p->topo = NULL;
}
