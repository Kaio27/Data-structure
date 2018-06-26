#ifndef LISTATEL_H_INCLUDED
#define LISTATEL_H_INCLUDED

#include <stdio.h>
#define SIZE 5
#define TAM 30

typedef char NOME;
typedef int NUMERO;
typedef char ENDERECO;

typedef struct
{
  NOME nome[TAM];
  ENDERECO endereco[TAM];
  NUMERO telefone;
}REGISTRO;

typedef struct
{
  REGISTRO dados[SIZE];
  int nElem;
}LISTA;

void menu();
void inicializarLista(LISTA *l);
void reinicializar(LISTA *l);
int tamanho(LISTA *l);
void inserir();
void inserctionSort(LISTA *l, REGISTRO dados);
void exibir(LISTA *l);
int buscaBin(LISTA *l, REGISTRO chave, int inicio, int fim);
void buscarNome(LISTA *l);
int buscarTel(LISTA *l);
int buscarEndereco(LISTA *l);
void excluirRegistro(LISTA *l);


#endif // LISTATEL_H_INCLUDED
