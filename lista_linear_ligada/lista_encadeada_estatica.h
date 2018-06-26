#ifndef LISTA_ENCADEADA_ESTATICA_H_INCLUDED
#define LISTA_ENCADEADA_ESTATICA_H_INCLUDED

#define MAX 50

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
    int prox;
}REGISTRO;

typedef struct{

    REGISTRO A[MAX];
    int numeroElem;
    int dispo;
    int inicio;
}LISTA;

void inicializar(LISTA *l);
void inserirElem(LISTA *l, REGISTRO reg);
void exibirLista(LISTA *l);
int inserirElemOrd(LISTA *l, REGISTRO reg);
int buscarElem(LISTA *l, TIPOCHAVE chave);
int excluirElem(LISTA *l);

#endif // LISTA_ENCADEADA_ESTATICA_H_INCLUDED
