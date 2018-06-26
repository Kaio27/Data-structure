#include <stdio.h>
#include <stdlib.h>
#include "lista_ligada_simplesmente_encadeada_dinamica.h"

void inicializarLista(LISTA *l){
    l->inicio = NULL;
}

void inserir_elemento(LISTA *l, REGISTRO reg){
    PONT novo = NULL;
    novo = (PONT) malloc(sizeof(ELEMENTO));
    if(novo == NULL){
        printf("\n\nErro de alocacao: inserir_elemento");
    }

    novo->reg = reg; //recebe o registro
    novo->prox = NULL; // deixa o prox NULL para não ter lixo na memoria
    novo->prox = l->inicio;
    l->inicio = novo;

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

    atual = l->inicio;

    while(atual != NULL && atual->reg.chave < reg.chave){
        ant = atual;
        atual = atual->prox;

    }

    novo->prox = atual;
    if(ant == NULL){
        l->inicio = novo;
    }else{
        ant->prox = novo;
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
        }
        else{
            ant->prox = atual->prox;
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




