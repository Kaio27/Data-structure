// Nome: <Kaio Aime Garcia>

//RA: <120065>

//Trabalho <Listas>

#include <stdio.h>
#include <stdlib.h>
#include "lista_sequencial_estatica.h"
int main()
{
    LISTA lista;
    REGISTRO elem;
    TIPOCHAVE chave;
    inicializa_lista(&lista);


    elem.chave = 7;
    inserirElemLista(&lista, elem);

    elem.chave = 9;
    inserirElemLista(&lista, elem);

    elem.chave = 3;
    inserirElemLista(&lista, elem);

    elem.chave = 5;
    inserirElemLista(&lista, elem);


    printf("\n\nNumero elementos: %d", tamanho(&lista));


    exibirLista(&lista);

    excluir(&lista, 3);

    printf("\n\nNumero elementos: %d", tamanho(&lista));

    exibirLista(&lista);

    chave = 5;
    /*if(buscaSequencial(&lista, chave) == -1){
        printf("\n Elemento %d nao esta na lista", chave);
    }else{
        printf("\n Elemento %d esta na lista", chave);
    }*/

    if(buscaBinariaRecursiva(&lista, chave, 0, lista.numeroElem-1) == -1){
        printf("\n Elemento %d nao esta na lista", chave);
    }else{
        printf("\n Elemento %d esta na lista", chave);
    }

    return 0;
}
