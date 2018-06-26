#ifndef LISTA_SEQUENCIAL_ESTATICA_H_INCLUDED
#define LISTA_SEQUENCIAL_ESTATICA_H_INCLUDED

#define MAX 50

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;

}REGISTRO;

typedef struct{
    REGISTRO A[MAX];
    int numeroElem;
}LISTA;


void inicializa_lista(LISTA *l); // inicializa a lista com 0 elementos.
int tamanho(LISTA *l); // numero de elementos
void exibirLista(LISTA *l); // passa por toda lista.
void inserirElemLista(LISTA *l, REGISTRO elem); //insere novo elemento na lista.;
int buscaSequencial(LISTA *l, TIPOCHAVE chave);
int buscaBinaria(LISTA *l, TIPOCHAVE ch, int inicio, int fim);
void excluir(LISTA *l, TIPOCHAVE ch);
int buscaBinariaRecursiva(LISTA *l, TIPOCHAVE ch, int inicio, int fim);
#endif // LISTA_SEQUENCIAL_ESTATICA_H_INCLUDED
