#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#define MAX 5

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
}REGISTRO;

typedef struct{
    REGISTRO A[MAX];
    int inicio;
    int numeroelem;
}FILA;

void inicializarFila(FILA *f);
int tamanhoFila(FILA *f);
void inserirElemFila(FILA *f, REGISTRO reg);
void exibirFila(FILA *f);
int buscar(FILA *f, TIPOCHAVE chave);
void excluirElemFila(FILA *f);
void reinicializar(FILA *f);


#endif // FUNCOES_H_INCLUDED
