#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
}REGISTRO;

typedef struct aux {
    REGISTRO reg;
    struct aux* prox;
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct {
    PONT inicio;
    PONT fim;
    int numElem;
}FILA;

void inicializar(FILA *f);
void exibirFila(FILA *f);
int imprimirNumeroElem(FILA *f);
void inserirElemFila(FILA *f, REGISTRO reg);
//void reinicializarFila(FILA *f);
//void excluirElemFila(FILA *f);
int excluir(FILA *f);
void reinicializar(FILA *f);

#endif // FUNCOES_H_INCLUDED
