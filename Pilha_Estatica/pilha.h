#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

typedef int TIPOCHAVE;
typedef struct {
    TIPOCHAVE chave;
}REGISTRO;
typedef struct {
    REGISTRO A[MAX];
    int topo;
}PILHA;

void inicializarLista(PILHA *p);
int tamanho(PILHA *p);
void exibirLista(PILHA *p);
void inserirElementoPilha(PILHA *p, REGISTRO numero);
void excluirElementoPilha(PILHA *p);
void reinicializarPilha(PILHA *p);

#endif // PILHA_H_INCLUDED
