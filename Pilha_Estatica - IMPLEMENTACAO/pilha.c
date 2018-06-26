#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "pilha.h"

void inicializarLista(PILHA *p){
	p->topo = -1;
}

int tamanho(PILHA *p){
	return (p->topo + 1);
}

void exibirLista(PILHA *p){

	int contador;

	for(contador = p->topo; contador >= 0; contador--){
        setlocale(LC_ALL, "Portuguese");
        printf("Nome do livro: %s", p->A[contador].nome_livro);
        printf("\nCodigo do livro: %i ", p->A[contador].codigo);
        printf("\nNome do Autor: %s", p->A[contador].nome_autor);
        printf("\nISBN do livro: %s", p->A[contador].isbn);
        printf("\nAno do livro: %s", p->A[contador].ano);
        printf("\nNumero de Páginas do livro: %s\n", p->A[contador].num_pag);


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
        printf("Não possivel excluir.");
    }
    p->topo--;

}

void reinicializarPilha(PILHA *p){
    p->topo = -1;
}
