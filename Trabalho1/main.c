#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaTel.h"

// Nome: <Kaio Aime Garcia, Vitor Oliveira>

//RA: <RA: 1200065, RA: 120151>

//Trabalho <Lista telefônica>


int main()
{
  menu();
  LISTA lista;
  REGISTRO reg;
  int op;
  inicializarLista(&lista); //iniciliza a lista com 0 elementos.

  do
  {
      //Menu onde o usuário irá escolher uma opção e o programa executará essa opção.
    printf("Digite a opcao desejada do menu: ");
    scanf("%d", &op);
    switch (op)
    {
      case 0:
        reinicializar(&lista);
        break;
      case 1:
        inserir(&lista, reg);
        break;
      case 2:
        exibir(&lista);
        break;
      case 3:
        buscarNome(&lista);
        break;
      case 4:
        buscarTel(&lista);
        break;
      case 5:
        buscarEndereco(&lista);
        break;
      case 6:
        excluirRegistro(&lista);
        break;
      case 7:
        puts("Saindo da Lista");
        break;
      default:
        puts("Opcao invalida");
    }

}while(op >= 0 && op <= 7);

  system("pause");

  return 0;
}
