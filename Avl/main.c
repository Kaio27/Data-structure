#include <stdio.h>
#include <stdlib.h>
#include "avl.h"

int main() {
    Pont r = inicializa();

    r = insere(r, 17);

    r = insere(r, 12);

    r = insere(r, 20);

    r = insere(r, 8);

    r = insere(r, 15);

    r = insere(r, 9);

    //printf("%d", r->chave);
    leituraPreOrdem(r);
    //exibirArvore2(r, r->chave);
}
