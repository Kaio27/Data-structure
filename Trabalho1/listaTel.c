#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaTel.h"

void menu()
{
    //função criada para um menu.
    puts("-----Lista Telefonica-----");
    puts("----------Menu------------");
    puts("1 - Inserir");
    puts("2 - Exibir");
    puts("3 - BuscaNome");
    puts("4 - BuscaTelefone");
    puts("5 - BuscaEndereco");
    puts("6 - Excluir");
    puts("7 - Sair");
    puts("0 - Resetar");
    puts("--------------------------");
}

void inicializarLista(LISTA *l)
{
    //inicializa a lista com 0 o numero de elementos.
  l->nElem = 0;
}

void reinicializar(LISTA *l)
{
    // renicializa a lista com 0 o numero de elementos.
  l->nElem = 0;
}

int tamanho(LISTA *l)
{
    // retorna o tamanho da lista.
    return l->nElem;
}

void inserctionSort(LISTA *l, REGISTRO dados)
{
  //verificar se está cheia e senão estiver aplicar o insertion sort
  int i;

  if(tamanho(l) >= SIZE)
  {
    puts("A lista esta cheia");
    return;
  }

  // insertion sort por ordem do numero do telefone

  for(i = l->nElem; i > 0 && strcmp(dados.nome, l->dados[i-1].nome) < 0; i--)
  {
      l->dados[i] = l->dados[i - 1];
  }

  l->dados[i] = dados;
  l->nElem++;
}

void inserir(LISTA *l, REGISTRO reg)
{
    // inseri um elemento na lista, pedindo para o usuário colocar o nome, endereço, telefone.
  int i = 0;
  char op;

  getchar();

  for(; i < SIZE && op != 'n'; i++)
  {
    printf("Digite o nome: ");
    fgets(reg.nome, TAM, stdin);
    printf("Digite o endereco: ");
    fgets(reg.endereco, TAM, stdin);
    printf("Digite o numero de telefone: ");
    scanf("%d", &reg.telefone);
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

void exibir(LISTA *l)
{
  int i;

  // exibi a lista, caso estiver vazia, recebera e mensagem "a lista esta vazia"
  if(tamanho(l) <= 0)
  {
    puts("A lista esta vazia");
  }

  //porem se tiver  nome ja inserido na lista, ele vai exibir.
  for(i = 0; i < l->nElem; i++)
  {
    puts("---------------------------------------------");
    printf("Nome: %s", l->dados[i].nome);
    printf("Endereco: %s", l->dados[i].endereco);
    printf("Telefone: %d\n", l->dados[i].telefone);
    puts("---------------------------------------------");
  }

  system("pause");
  system("cls");
  menu();
}



int buscaBin(LISTA *l, REGISTRO chave, int inicio, int fim)
{

  int meio =  (inicio + fim) / 2;

  // se l->dados[meio].nome, chave.nome é igual a 0, retorna no meio.
  if(strcmp(l->dados[meio].nome, chave.nome) == 0)
  {
    return meio;
  }

  // se o inicio for maior e igual ao fim , retorna -1
  if(inicio >= fim)
  {
    return -1;
  }else
  {
    // l->dados[meio].nome, chave.nome menor que 0 ele faz a busca binaria incrementando 1 no meio para  esquerda.
    if(strcmp(l->dados[meio].nome, chave.nome) < 0)
    {
      return buscaBin(l, chave, meio + 1, fim);
    }else
    {
        //l->dados[meio].nome, chave.nome menor que 0 ele faz a busca binaria decrementando 1 no meio para  direita.
      return buscaBin(l, chave, inicio, meio - 1);
    }
  }
}

void buscarNome(LISTA *l)
{
  REGISTRO reg;
  int resultado;

  getchar();
  printf("Digite o nome que deseja procurar na lista: ");
  fgets(reg.nome, TAM, stdin);


  resultado = buscaBin(l, reg, 0, SIZE -1);
    // se o resultado for -1 quer dizer que o elemento não foi encontrado.
  if(resultado == -1)
  {
    puts("O elemento procurado nao foi encontrado");
  }else
  {
    // se não, quer dizer que o elemento foi encontrado e mostra a posição que ele está na lista.
    printf("O elemento foi encontrado e esta na posicao %d da lista.\n", resultado);
  }

  system("pause");
  system("cls");
  menu();
}

int buscarTel(LISTA *l)
{
  int i = 0, aux = 0;
  NUMERO telefone;

  printf("Digite o numero de telefone que deseja encontrar: ");
  scanf("%d", &telefone);


  for(; i < l->nElem; i++)
  {
    // caso  o telefone for igual a l->dados[i].telefone, entao guarda o i na aux.
    if(telefone == l->dados[i].telefone)
    {

      aux = i;
      break;
    }
  }

  // caso a aux for 0, encontrou o telefone e mostra qual posicao esta na lista.
  if(aux != 0)
  {
      printf("O numero de telefone %d foi encontrado na posicao: %d\n", telefone, aux);
  }else
  {
      // se não, o numero foi encontrado.
    printf("O numero de telefone %d nao foi encontrado.\n", telefone);
  }

  system("pause");
  system("cls");
  menu();

}

int buscarEndereco(LISTA *l)
{
   // essa função faz a memsma lógica de buscarTel, porem passando a chave acessando o endereço.
  int i = 0, aux = 0;
  REGISTRO chave;

  getchar();
  printf("Digite o endereco que deseja encontrar: ");
  fgets(chave.endereco, TAM, stdin);

  for(; i < l->nElem; i++)
  {
    if(strcmp(chave.endereco, l->dados[i].endereco) == 0)
    {
      aux = i;
      break;
    }
  }

  if(aux != 0)
  {
      printf("O endereco foi encontrado na posicao: %d\n", chave, aux);
  }else
  {
    printf("O endereco nao foi encontrado.\n", chave);
  }

  system("pause");
  system("cls");
  menu();

}

void excluirRegistro(LISTA *l)
{
  // usuario excluir o registro que queira.
  REGISTRO ex;
  int posicao, i;
  getchar();
  printf("Digite o nome do registro que deseja excluir: ");
  fgets(ex.nome, TAM, stdin);

  posicao = buscaBin(l, ex, 0, SIZE -1);

  // se a posicao for igual a -1, quer dizer que não existe registro
  if(posicao == -1)
  {
    puts("Registro inexistente.");
  }else
  {
    // ai ele percorre o for , exclui da poscição que o usuário pediu então, atualiza os elementos.
    for(i = posicao; i < l->nElem; i++)
    {
      l->dados[i] = l->dados[i+1]; // elementos são ajustados
    }

     l->dados[i] = ex;
     l->nElem--;
  }
}
