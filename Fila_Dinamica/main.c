#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
    FILA f;
    REGISTRO reg;

    inicializar(&f);


    reg.chave = 6;
    inserirElemFila(&f, reg);

    reg.chave = 3;
    inserirElemFila(&f, reg);

    reg.chave = 1;
    inserirElemFila(&f, reg);


    reg.chave = 4;
    inserirElemFila(&f, reg);


    exibirFila(&f);

    excluir(&f);

    exibirFila(&f);



    reinicializar(&f);

    return 0;
}
