#include <stdio.h>
#include <stdlib.h>
#include "avl.h"


Pont inicializa() {
    return(NULL);
}

Pont criaNovoNo(TipoChave ch) {
    Pont novoNo = (Pont)malloc(sizeof(NO));
    novoNo->chave = ch;
    novoNo->esq = NULL;
    novoNo->dir = NULL;
    novoNo->h = 0;
    return(novoNo);
}

int max(int a, int b){
    if (a > b) return a;
    return b;
}

int altura(Pont raiz) {
    if (!raiz) return -1;
    return raiz->h;
}

Pont direita(Pont r) {
    Pont aux;
    aux = r->esq; //aux é a subárvore da esquerda do nó desbalanceado
    r->esq = aux->dir; //r adota o filho de aux
    aux->dir = r; //aux passa a ser pai de r

    //atualiza as alturas dos nós que foram rotacionados
    r->h = max(altura(r->dir), altura(r->esq)) + 1;
    aux->h = max(altura(aux->esq), r->h) + 1;

    return(aux); //retorna a nova raiz
}

Pont esquerda(Pont r) {
    Pont aux;
    aux = r->dir; //aux é a sub�rvore da direita do n� desbalanceado
    r->dir = aux->esq; //r adota o filho de aux
    aux->esq = r; //aux passa a ser pai de r

    //atualiza as alturas dos nós que foram rotacionados
    r->h = max(altura(r->dir), altura(r->esq)) + 1;
    aux->h = max(altura(aux->esq), r->h) + 1;

    return(aux); //retorna a nova raiz
}

Pont esquerdaDireita(Pont r) {
    r->esq = esquerda(r->esq); //mando o filho é esquerda do nó desbalanceado
    return(direita(r)); //rotação é direita do nó desbalanceado
}

Pont direitaEsquerda(Pont r) {
    r->dir = direita(r->dir); //mando o filho é direita do nó desbalanceado
    return(esquerda(r)); //rotação é esquerda do nó desbalanceado
}

Pont insere(Pont raiz, TipoChave ch) {
    if (!raiz) return(criaNovoNo(ch));

    /*a chamada recursiva de insere irá percorrer a árvore até encontrar o
     o lugar onde o nó será inserido, então, o mesmo é inserido com a chamada
     criaNo(ch) */

    if (ch < raiz->chave) {
        raiz->esq = insere(raiz->esq, ch);

        if ((altura(raiz->esq) - altura(raiz->dir)) == 2){ // +2 = desbalanceamento à esquerda
            if (ch < raiz->esq->chave) // nó inserido é menor que o filho à esquerda do nó desbalanceado?
                raiz = direita(raiz);
            else
                raiz = esquerdaDireita(raiz);
        }
    }
    else{
        if (ch > raiz->chave){
            raiz->dir = insere(raiz->dir, ch);

            if ((altura(raiz->esq) - altura(raiz->dir)) == -2){ // -2 = desbalanceamento à direita
                if (ch > raiz->dir->chave) // nó inserido é maior que o filho à direita do nó desbalanceado?
                    raiz = esquerda(raiz);
                else
                    raiz = direitaEsquerda(raiz);
            }
        }
        else {
            printf("Valor duplicado!!");
            return 0;
        }
    }
    raiz->h = max(altura(raiz->esq), altura(raiz->dir)) + 1;
    return(raiz);
}

void leituraPreOrdem(Pont raiz){
    if (raiz != NULL) {
        printf("%d ", raiz->chave);
        leituraPreOrdem(raiz->esq);
        leituraPreOrdem(raiz->dir);
    }
}

