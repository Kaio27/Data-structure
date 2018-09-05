#ifndef AVL_H_INCLUDED
#define AVL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

typedef int bool;
typedef int TipoChave;

typedef struct aux {
    TipoChave chave;
    //dados aqui
    struct aux *esq, *dir;
    int h; //guarda a altura de cada nó
} NO;

typedef NO* Pont;

Pont inicializa();
Pont criaNovoNo(TipoChave ch);
int max(int a, int b);
int altura(Pont raiz);
Pont direita(Pont r);
Pont esquerda(Pont r);
Pont esquerdaDireita(Pont r);
Pont direitaEsquerda(Pont r);
Pont insere(Pont raiz, TipoChave ch);
void leituraPreOrdem(Pont raiz);
#endif // AVL_H_INCLUDED
