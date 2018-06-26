// Nome: <Kaio Aime Garcia>

//RA: <120065>

//Trabalho <Pilha Est�tica>

/* RESUMO DO VIDEO: https://www.youtube.com/watch?v=ruOzUIA4rbs

Utiliza-se um arranjo de elementos pre-definido,
quando se insere um novo elemento, se insere no topo,
quando se exclui um elemento, se exclui no topo, foi
implementado as fun��es (inicializar os elementos,
retornar a quantidade dos elementos validos, exibir
os elementos, inserir os elementos(push), excluir os
elementos(poop), e reinicializar)
inicialiar os elementos com -1;
retornar o numero de elementos � passar o topo+1;
exibir os elementos: � chamar a chave com o atual da pilha;
insere o elemento passado pelo usu�rio um registro na pilha
inserindo o elemento, caso a pilha n�o esteje cheia, o elemento
ser� inserido no topo da pilha, acima do elemento que ja esteja
na pilha;
excluir o elemento, se a pilha tiver vazia, n�o tem como excluir,
mas se o tiver elemento na pilha, exclui do topo;
reiniliza��o coloca -1 no campo topo. */

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
int main()
{
    PILHA pilha;
    inicializarLista(&pilha);
    REGISTRO reg;
    reg.chave = 1;
    inserirElementoPilha(&pilha, reg);
    reg.chave = 2;
    inserirElementoPilha(&pilha, reg);
    reg.chave = 3;
    inserirElementoPilha(&pilha, reg);
    //excluirElementoPilha(&pilha); //<- caso queira excluir algum registro basta descomentar essa linha.
    exibirLista(&pilha);
    return 0;
}


