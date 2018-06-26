// Nome: <Kaio Aime Garcia>

//RA: <120065>

//Aulas <Listas>

#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada_estatica.h"
int main(){
    LISTA lista;
    REGISTRO elem;
    int i;

  /*  inicializar(&lista);

    elem.chave = 5;
    inserirElem(&lista, elem);

    elem.chave = 10;
    inserirElem(&lista, elem);

    elem.chave = 3;
    inserirElem(&lista, elem);

    exibirLista(&lista);*/

    inicializar(&lista);
    elem.chave = 5;
    inserirElemOrd(&lista, elem);

    elem.chave = 10;
    inserirElemOrd(&lista, elem);

    elem.chave = 3;
    inserirElemOrd(&lista, elem);

    exibirLista(&lista);

    /*if((i = buscarElem(&lista, elem.chave) != -1)){
        printf("\nEncontrou elemento na posicao %d", i);
    }else{
        printf("O elemento nao esta na lista");
    }*/

    return 0;
}
