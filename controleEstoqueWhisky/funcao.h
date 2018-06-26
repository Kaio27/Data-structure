#ifndef FUNCAO_H_INCLUDED
#define FUNCAO_H_INCLUDED

#define SIZE 10
#define TAM 50

#include <stdio.h>

typedef char NOME;
typedef float PRECO_VENDA;
typedef int IDADE;
typedef char NACIONALIDADE;
typedef int COD_PROD;
typedef int QTD_ESTOQUE;



typedef struct{
    NOME nome[TAM];
    PRECO_VENDA preco;
    IDADE idade;
    NACIONALIDADE nacionalidade[TAM];
    COD_PROD cod_prod;
    QTD_ESTOQUE qtd_estoque;

}REGISTRO;

typedef struct{
    REGISTRO dados[SIZE];
    int numeroElem;
}LISTA;

void menu();
void inicializar(LISTA *l);
int tamanhoLista(LISTA *l);
void reinicializar(LISTA *l);
void inserctionSort(LISTA *l, REGISTRO dados);
void inserir(LISTA *l, REGISTRO reg);
int buscaBinaria(LISTA *l, REGISTRO chave, int inicio, int fim);
void excluirRegistro(LISTA *l);
void exibirLista(LISTA *l);
#endif // FUNCAO_H_INCLUDED
