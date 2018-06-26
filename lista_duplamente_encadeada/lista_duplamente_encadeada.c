#include <stdlib.h>
#include <stdio.h>
#include "lista_duplamente_encadeada.h"


void inicializarLista(LISTA *l){
    l->inicio = NULL;
}

void inserir_elemento_ordendo(LISTA *l, REGISTRO reg){
     PONT atual = NULL;
     PONT ant = NULL;
     PONT novo = NULL;
     novo = (PONT) malloc(sizeof(ELEMENTO));
      if(novo == NULL){
        printf("\n\nErro de alocacao: inserir_elemento_ordenado");
    }

    novo->reg = reg;
    novo->prox = NULL;
    novo->ant = NULL;

    atual = l->inicio;

    while(atual != NULL && atual->reg.chave < reg.chave){
        ant = atual;
        atual = atual->prox;

    }

    novo->prox = atual;
    novo->ant = ant;
    if(ant == NULL){
        l->inicio = novo;
        if(atual != NULL){
            atual->ant = novo;

        }
    }else{
        ant->prox = novo;
        if(atual != NULL){
            atual->ant = novo;
        }
    }
}

void imprimir(LISTA *l){
    PONT aux  = l->inicio;
    while(aux != NULL){
        printf("\t %d", aux->reg.chave);
        aux = aux->prox;
    }
}


PONT busca_elemento(LISTA *l, TIPOCHAVE ch){
    PONT aux  = l->inicio;
    while(aux != NULL && aux->reg.chave < ch){
        aux = aux->prox;
    }
    if(aux != NULL && aux->reg.chave == ch){
        return aux;
    }

    return NULL;
}

int excluir_elemento(LISTA *l, TIPOCHAVE ch){
    PONT ant = NULL;
    PONT atual = l->inicio;

    while(atual != NULL && atual->reg.chave < ch){
        ant = atual;
        atual = atual->prox;

    }

    if(atual == NULL){
        printf("\nNao houve exclusao");
    }
    else{
        if(ant == NULL){
            l->inicio = atual->prox;
            l->inicio->ant = NULL;

        }
        else{
            ant->prox = atual->prox;
            if(atual->prox != NULL){
                atual->prox->ant = ant;
            }
        }
        free(atual);
    }
}

void reinicializar(LISTA *l){
    PONT aux = l->inicio;
    while(aux != NULL){
        l->inicio = l->inicio->prox;
        free(aux);
        aux = l->inicio;
    }
}
