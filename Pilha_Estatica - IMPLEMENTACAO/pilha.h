#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

typedef int TIPOCHAVE;
typedef char NOME_LIVRO;
typedef char NOME_AUTOR;
typedef int ISBN;
typedef int ANO;
typedef int NUMERO_PAGINAS;


typedef struct {
    TIPOCHAVE codigo;
    NOME_LIVRO nome_livro[MAX];
    NOME_AUTOR nome_autor[MAX];
    ISBN isbn;
    ANO ano;
    NUMERO_PAGINAS num_pag;
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
