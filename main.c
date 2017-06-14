#include <stdio.h>

// Colocar as funções nos respectivos arquivos.h no Headers

void adicionar(int valor);
int buscarPorValor(int valor);
void excluir(int valor);
void ordenar();
void expandir();
void inicializar();
void finalizar();
void listar();

void menu();

int tamanho = 5;
int posicao = 0;
int opcao;
int numero;
int indice;
int *lista;

int cpf, telefone;
char nome[30];

struct listaDim
{
    int cpf;
    char nome[30];
    int telefone;
};
struct listaDim listaDim;

int main()
{
    inicializar();
    opcao = 0;
    while(opcao !=5)
    {
        menu();
        switch(opcao)
        {
        case 1:
            printf("Digite o CPF: ");
            scanf("%d", &cpf);
            printf("Digite o Nome: ");
            scanf("%c", nome);
            printf("Digite o Telefone: ");
            scanf("%d", &telefone);

            adicionar(cpf,nome,telefone);
            break;
        case 2:
            printf("Digite o numero: ");
            scanf("%d", &numero);
            indice = buscarPorValor(numero);
            if(indice == -1)
                printf("Nao encontrei %d na lista!\n", numero);
            else
                printf("Encontreio valor %d no indice %d\n", numero, indice);
            break;
        case 3:
            printf("Digite o valor para excluir: ");
            scanf("%d", &numero);
            excluir(numero);
            break;
        case 4:
            listar();
            break;
        }
    }
    finalizar();
}

void inicializar()
{
    listaDim = malloc(tamanho * sizeof(int));
    if(!listaDim)
    {
        printf("Erro de alocacao!");
        exit(-1);
    }
}

void finalizar()
{
    free(lista);
}

void menu()
{
    printf("1 - Adicionar\n");
    printf("2 - Localizar\n");
    printf("3 - Excluir\n");
    printf("4 - Listar\n");
    printf("5 - Sair\n");
    printf("Digite a sua opcao: ");
    scanf("%d", &opcao);
}

void listar()
{
    int i;
    for(i = 0; i < posicao; i++)
        printf("lista[%d] = %d\n", i, lista[i]);
}

void adicionar(int cpf, char nome[30], int telefone)
{
     expandir();
     listaDim.cpf=cpf;
     listaDim.nome=nome;
     listaDim.telefone=telefone;
}

int buscarPorValor(int valor)
{
    int i = 0;
    for(i = 0; i < posicao; i++)
        if(lista[i] == valor)
            return i;
    return -1;
}

void excluir(int valor)
{
    int i = 0;
    i = buscarPorValor(valor);
    if(i != -1)
    {
        for(; i < posicao - 1; i++)
            lista[i] = lista[i + 1];
        posicao--;
    }
    else
        printf("Nao encontrei %d na lista!\n", valor);
}

void ordenar()
{
    int i = 0;
    int j = 0;
    int aux = 0;

    for(i = 0; i < (posicao -1); i++)
    {
        for(j = i + 1; j < posicao; j++)
        {
            if(lista[i] > lista[j])
            {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }
}

void expandir()
{
    int novoTamanho = tamanho + 1;
    int *p;
    int i;

    p = malloc(novoTamanho * sizeof(int));
    if(!p)
    {
        printf("Erro na alocacao de memoria!");
        exit(-1);
    }

    for(i = 0; i < tamanho; i++)
        p[i] = listaDim[i];

    free(listaDim);
    listaDim = p;
    tamanho = novoTamanho;
}
