#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void inicializarLista(PILHA *p){
	p->topo = -1;
}

int tamanho(PILHA *p){
	return (p->topo + 1);
}

void exibirLista(PILHA *p){
    if(p->topo == -1){
        printf("Pilha vazia! ");//

    }
	int contador;
	printf("Pilha: ");
	for(contador = p->topo; contador >= 0; contador--){
        printf("%i ", p->A[contador].chave);
	}
}

void inserirElementoPilha(PILHA *p, REGISTRO numero){

	if(p->topo >= MAX-1){
        printf("Pilha vazia");
	}
	p->topo += 1;
	p->A[p->topo] = numero;

}

void excluirElementoPilha(PILHA *p){
    if(p->topo == -1){
    printf("Nao foi possivel excluir");
    }
    p->topo--;

}

void reinicializarPilha(PILHA *p){
    p->topo = -1;
}
