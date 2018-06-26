#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"

void menu(){
    puts("-----Controle Estoque Whisky-----");
    puts("----------Menu------------");
    puts("1 - Inserir Whisky");
    puts("2 - Exibir a lista");
    //puts("3 - BuscaNome");
    //puts("4 - BuscaTelefone");
    //puts("5 - BuscaEndereco");
    puts("3 - Excluir um elemento da lista");
    puts("4 - Sair");
    puts("0 - Resetar");
    puts("--------------------------");
}


void inicializar(LISTA *l){
    l->numeroElem = 0;
}

int tamanhoLista(LISTA *l){
    return l->numeroElem;
}

void reinicializar(LISTA *l){
    l->numeroElem = 0;
}


void inserctionSort(LISTA *l, REGISTRO dados){
  //verificar se está cheia e senão estiver aplicar o insertion sort
  int i;

  if(tamanhoLista(l) >= SIZE){
    printf("A lista esta cheia");
    return;
  }



  for(i = l->numeroElem; i > 0 && strcmp(dados.nome, l->dados[i-1].nome) < 0; i--){
      l->dados[i] = l->dados[i - 1];
  }

  l->dados[i] = dados;
  l->numeroElem++;
}


void inserir(LISTA *l, REGISTRO reg){

  int i = 0;
  char op;

  getchar();

  for(; i < SIZE && op != 'n'; i++){
    printf("Digite o nome: ");
    fgets(reg.nome, TAM, stdin);
    printf("Digite a Nacionalidade: ");
    fgets(reg.nacionalidade, TAM, stdin);
    printf("Digite o Codigo do Produto: ");
    scanf("%d", &reg.cod_prod);
    printf("Digite a Idade do Whisky: ");
    scanf("%d", &reg.idade);
    printf("Digite o Preco da Venda: ");
    scanf("%f", &reg.preco);
    printf("Digite o Quantidade do estoque: ");
    scanf("%d", &reg.qtd_estoque);
    getchar();
    inserctionSort(l, reg);
    printf("Deseja continuar o cadastro?: ");
    scanf("%c", &op);
    getchar();
  }

  system("pause");
  system("cls");
  menu();
}


int buscaBinaria(LISTA *l, REGISTRO chave, int inicio, int fim){

  int meio =  (inicio + fim) / 2;

  // se l->dados[meio].nome, chave.nome é igual a 0, retorna no meio.
  if(strcmp(l->dados[meio].nome, chave.nome) == 0){
    return meio;
  }

  // se o inicio for maior e igual ao fim , retorna -1
  if(inicio >= fim){
    return -1;
  }else{
    // l->dados[meio].nome, chave.nome menor que 0 ele faz a busca binaria incrementando 1 no meio para  esquerda.
    if(strcmp(l->dados[meio].nome, chave.nome) < 0){
      return buscaBinaria(l, chave, meio + 1, fim);
    }else{
        //l->dados[meio].nome, chave.nome menor que 0 ele faz a busca binaria decrementando 1 no meio para  direita.
      return buscaBinaria(l, chave, inicio, meio - 1);
    }
  }
}



void exibirLista(LISTA *l){
    int i;

    if(tamanhoLista(l) <= 0){
        printf("Lista esta vazia!");
    }

    for(i = 0; i < l->numeroElem; i++){


    printf("\nNome: %s", l->dados[i].nome);
    printf("\nCodigo do Produto: %d", l->dados[i].cod_prod);
    printf("\nNacionalidade: %s", l->dados[i].nacionalidade);
    printf("\nIdade: %d", l->dados[i].idade);
    printf("\nPreco da venda: %f", l->dados[i].preco);
    printf("\nQuantidade de estoque: %d\n", l->dados[i].qtd_estoque);
    }

    system("pause");
    system("cls");
    menu();
}


void excluirRegistro(LISTA *l){
  REGISTRO ex;

  int posicao, i;
  getchar();
  printf("Digite o nome do registro que deseja excluir: ");
  fgets(ex.nome, TAM, stdin);

  posicao = buscaBinaria(l, ex, 0, SIZE -1);

  if(posicao == -1)
  {
    puts("Registro inexistente.");
  }else
  {
    for(i = posicao; i < l->numeroElem; i++)
    {
      l->dados[i] = l->dados[i+1];
    }

     l->dados[i] = ex;
     l->numeroElem--;
  }

  system("pause");
  system("cls");
  menu();
}







