#include "lista_encadeada_estatica.h"

void inicializar(LISTA *l){
    int i;
    l->numeroElem = 0;
    l->inicio = -1;
    l->dispo = 0;
    for(i = 0; i < MAX-1; i++){
        l->A[i].prox = i + 1;
    }
    l->A[MAX-1].prox = -1;
}

void exibirLista(LISTA *l){
    int i;

    for(i = l->inicio; i != -1; i = l->A[i].prox){
        printf(" [%d]= %d", i, l->A[i].chave);
    }
}

void inserirElem(LISTA *l, REGISTRO reg){
    int aux;
    int i;
    if(l->numeroElem >= MAX){
        printf("\nNao foi possivel inserir: LISTA CHEIA");
        return;
    }
    l->numeroElem = l->numeroElem+1;

    reg.prox = l->inicio;

    aux = l->dispo;

    l->dispo = l->A[l->dispo].prox;

    l->inicio = aux;

    l->A[aux] = reg;
}



int inserirElemOrd(LISTA *l, REGISTRO reg){
    int ant = -1;
    int atual;
    int aux_dispo = l->A[l->dispo].prox;
    int i;
    if(l->dispo == -1){
        return -1;
    }

    l->A[l->dispo].chave = reg.chave;

    l->numeroElem = l->numeroElem+1;

    atual = l->inicio;

    while(atual >= 0 && l->A[atual].chave  < reg.chave){
        ant = atual;
        atual = l->A[atual].prox;
    }
    if(ant == -1){
        l->A[l->dispo].prox = l->inicio;
        l->inicio = l->dispo;
    }
    else{
       l->A[ant].prox = l->dispo;
       l->A[l->dispo].prox = atual;

    }

    l->dispo = aux_dispo;

}

 int buscarElem(LISTA *l, TIPOCHAVE chave){
    int i;
    if(l->numeroElem == -1){
        return -1;
    }

    for(i = l->inicio; i >= 0 && l->A[i].chave < chave;  i = l->A[i].prox){};

    if(i == -1 || (i >= 0 && l->A[i].chave != chave)){
        return -1;
    }

    return i;
 }

int excluirElem(LISTA *l){

}

void reinicializar(LISTA *l){
    inicializar(l);
}
