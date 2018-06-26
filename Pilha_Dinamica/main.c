#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

int main()
{
    PILHA pilha;
    REGISTRO reg;
    inicializar(&pilha);

    reg.chave = 1;
    inserirPilha(&pilha, reg);

    reg.chave = 9;
    inserirPilha(&pilha, reg);

    reg.chave = 6;
    inserirPilha(&pilha, reg);

    reg.chave = 4;
    inserirPilha(&pilha, reg);

    reg.chave = 2;
    inserirPilha(&pilha, reg);

    //excluirElemPilha(&pilha);
    //excluirElemPilha(&pilha);

    exibirPilhaDimanica(&pilha);

    reinicializarPilha(&pilha);




    return 0;
}
