#include<stdlib.h>
#include<stdio.h>
#define true 1
#define false 0


typedef int bool;
typedef int TIPOCHAVE;

typedef struct aux{
    TIPOCHAVE chave;
    struct aux *esq, *dir;
}NO;

typedef NO *Pont;


//--------------------
Pont inicializa();
Pont adiciona(Pont raiz, Pont no);
Pont createNode(TIPOCHAVE ch);
Pont contem(TIPOCHAVE ch, Pont raiz);
void leituraEmOrdem(Pont raiz);
void leituraPreOrdem(Pont raiz);
void leituraPosOrdem(Pont raiz);
int conta(Pont raiz);
