#include "arvore.h"
Pont inicializa(){
    return(NULL);
}
Pont adiciona(Pont raiz, Pont no){
    if(raiz == NULL){
        return(no);
    }
    if(no->chave < raiz->chave){
        raiz->esq = adiciona(raiz->esq, no);
    }else{
        raiz->dir = (adiciona(raiz->dir, no));
    }
    return(raiz);
}

Pont createNode(TIPOCHAVE ch){
Pont newNode = (Pont)malloc(sizeof(NO));
newNode->chave = ch;
newNode->esq = NULL;
newNode->dir = NULL;
return(newNode);
}


Pont contem(TIPOCHAVE ch, Pont raiz){
    if(raiz == NULL){
        return (NULL);
    }

    if(raiz->chave == ch){
        return (raiz);
    }

    if(raiz->chave > ch){
        return (contem(ch, raiz->esq));
    }else{
        return (contem(ch, raiz->dir));
    }
}

void leituraEmOrdem(Pont raiz){
    if(raiz != NULL){
        leituraEmOrdem(raiz->esq);
        printf("%i", raiz->chave);
        leituraEmOrdem(raiz->dir);
    }

}

void leituraPreOrdem(Pont raiz){
    if(raiz != NULL){
        printf("%i", raiz->chave);
        leituraPreOrdem(raiz->esq);
        leituraPreOrdem(raiz->dir);
    }
}

void leituraPosOrdem(Pont raiz){
    if(raiz != NULL){
        leituraPosOrdem(raiz->esq);
        leituraPosOrdem(raiz->dir);
        printf("%i", raiz->chave);
    }
}

int conta(Pont raiz){
    if(raiz == NULL){
        return 0;
    }else{
        return (conta (raiz->esq) + 1 + conta(raiz->dir));
    }
}
