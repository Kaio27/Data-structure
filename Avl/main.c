#include <stdio.h>
#include <stdlib.h>
#include "avl.h"

int main() {
    Pont r = inicializa();

     r = insere(r, 5);

    r = insere(r, 3);

    r = insere(r, 10);

    r = insere(r, 1);

    r = insere(r, 4);

    r = insere(r, 8);

    r = insere(r, 11);

    r = insere(r, 2);

    r = insere(r, 7);

    r = insere(r, 9);

    r = insere(r, 12);

    r = insere(r, 6);

    //printf("%d", r->chave);
    //leituraPreOrdem(r);
    //exibirArvore2(r, r->chave);

    //r = remover(r, 6);
    leitura(r, r->chave);
    printf("\n");
}
