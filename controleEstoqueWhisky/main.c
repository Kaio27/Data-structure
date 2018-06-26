#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"


int main(){
    menu();
    LISTA lista;
    REGISTRO reg;
    int op;
    inicializar(&lista);


    do{
        printf("Digite a opcao desejada do menu: ");
        scanf("%d", &op);
    switch (op){
      case 0:
        reinicializar(&lista);
        break;
      case 1:
        inserir(&lista, reg);
        break;
      case 2:
        exibirLista(&lista);
        break;
      case 3:
        excluirRegistro(&lista);
        break;
      case 4:
        puts("Saindo da Lista");
        break;
      default:
        puts("Opcao invalida");
    }

}while(op >= 0 && op <= 4);

    return 0;
}
