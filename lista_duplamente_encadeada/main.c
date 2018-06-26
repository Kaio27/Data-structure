#include <stdio.h>
#include <stdlib.h>
#include "lista_duplamente_encadeada.h"


int main()
{
   LISTA lista;
    REGISTRO reg;

    inicializarLista(&lista);

    reg.chave = 8;
    inserir_elemento_ordendo(&lista, reg);

    reg.chave = 10;
    inserir_elemento_ordendo(&lista, reg);

    reg.chave = 3;
    inserir_elemento_ordendo(&lista, reg);

    reg.chave = 6;
    inserir_elemento_ordendo(&lista, reg);

    reg.chave = 7;
    inserir_elemento_ordendo(&lista, reg);

    reg.chave = 1;
    inserir_elemento_ordendo(&lista, reg);

    reg.chave = 8;
    excluir_elemento(&lista, reg.chave);

   /* reg.chave = 10;
    if(busca_elemento(&lista, reg.chave) != NULL){
        printf("O elemento %d esta na lista.\n");
    }else{
        printf("\nO elemento %d nao esta na lista.\n");
    }

    reg.chave = 15;
    if(busca_elemento(&lista, reg.chave) != NULL){
        printf("O elemento %d esta na lista.\n");
    }else{
        printf("\nO elemento %d nao esta na lista.\n");
    }*/

    imprimir(&lista);

    reinicializar(&lista);
    return 0;
}
