#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"




int main()
{
    Pont r = inicializa();

    Pont node = createNode(19);
    r = adiciona(r,node);

    node = createNode(12);
    r = adiciona(r,node);

    node = createNode(15);
    r = adiciona(r,node);

    node = createNode(20);
    r = adiciona(r,node);


    node = createNode(16);
    r = adiciona(r,node);

    node = createNode(17);
    r = adiciona(r,node);

    leituraPreOrdem(r);

    r = removeNo(r, 20);

    leituraPreOrdem(r);

    /*Pont p = contem(12, r);
    printf("%d", p->chave);*/


}
