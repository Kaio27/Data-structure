#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
    REGISTRO reg;
    FILA fila;
    TIPOCHAVE chave;
    inicializarFila(&fila);

    reg.chave = 10;
    inserirElemFila(&fila, reg);

    reg.chave = 9;
    inserirElemFila(&fila, reg);

    reg.chave = 2;
    inserirElemFila(&fila, reg);

    reg.chave = 7;
    inserirElemFila(&fila, reg);

    reg.chave = 6;
    inserirElemFila(&fila, reg);

    exibirFila(&fila);

    chave = 9;
    buscar(&fila, chave);

    /*printf("\n\n ----> Excluiu");
    excluirElemFila(&fila);

    printf("\n\n ----> Excluiu");
    excluirElemFila(&fila);
    exibirFila(&fila);

    printf("\n\n ----> Excluiu");
    excluirElemFila(&fila);
    exibirFila(&fila);

    printf("\n\n ----> Excluiu");
    excluirElemFila(&fila);
    exibirFila(&fila);

    printf("\n\n ----> Excluiu");
    excluirElemFila(&fila);
    exibirFila(&fila);

    printf("\n\n ----> Excluiu");
    excluirElemFila(&fila);*/

    reinicializar(&fila);
    return 0;
}
