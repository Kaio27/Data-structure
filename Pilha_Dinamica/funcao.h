#ifndef FUNCAO_H_INCLUDED
#define FUNCAO_H_INCLUDED

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
}REGISTRO;

typedef struct{
    REGISTRO reg;
    struct aux* prox;

}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct{
    PONT topo;
}PILHA;

void inicializar(PILHA *p);
int qtdElem(PILHA *p);
void exibirPilhaDimanica(PILHA *p);
int inserirPilha(PILHA *p, REGISTRO reg);
int excluirElemPilha(PILHA *p);
void reinicializarPilha(PILHA *p);

#endif // FUNCAO_H_INCLUDED
