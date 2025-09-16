#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX  30
#define vetor  5

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

typedef struct
{
    char nomeProduto[30];
    float precoProduto; 
    int quantidadeProduto;
}produto;

typedef struct 
{
    char nomeProduto[30];
    float precoProduto; 
    int quantidadeProduto;
}carrinho;


void cadastroProduto(produto produto1[], int let) 
{   
    
    printf("Digite o nome do %dº produto: [30 caracteres maximo]\n", let + 1);
    fgets(produto1[let].nomeProduto, MAX, stdin);
    produto1[let].nomeProduto[strcspn(produto1[let].nomeProduto, "\n")] = '\0';

    printf("Digite o preco do %dº produto: ", let + 1);
    scanf("%f", &produto1[let].precoProduto);
    limparBuffer();

    printf("Digite a quantidade do %dº produto: ", let +1);
    scanf("%d", &produto1[let].quantidadeProduto);
    limparBuffer();

}

void menu() 
{
    printf("1.Casdatrar produto\n2.ver produtos\n3.ver no carrinho");
}


void mostrar_carros(carrinho carro[], produto produto1[]) 
{
    for (int i = 0; i < vetor; i++) 
    {
        strcpy(carro[i].nomeProduto, produto1[i].nomeProduto);
        carro[i].precoProduto = carro[i].precoProduto;
        carro[i].quantidadeProduto = produto1[i].quantidadeProduto;
    }

    for (int i = 0; i < 5;i++) 
    {
        printf ("Produtos %s Preco: %.2f Quantidade %d", carro[i].nomeProduto,carro[i].precoProduto, carro[i].quantidadeProduto);
    } 
}

int main() 
{
    //Colocarei esse Escolha para ser utilizado no codigo varias veces ja que nao sera preciso pois todas vez que for chamado sera usando um novo valor
    int Escolher = 0;
    produto produto1[vetor];
    printf("Bem-vido Ao Mercadinho Da Beren\n");
    menu();
    carrinho carro[vetor];
    scanf("%d", &Escolher);
    limparBuffer();

    switch (Escolher)
    {
        case 1:   
        printf("Cadastro de Produtos\n");
        for (int i = 0; i < vetor; i++)
        {
            
            cadastroProduto(produto1, i);
        }
        
        break;

        case 2:  mostrar_carros(carro,produto1);
        break;

        default: printf ("Escolha umas das opcoes \n"); getchar();
        break;
    }
    for (int i = 0; i < vetor; i++)
    {
        printf("%s, %.2f, %d", produto1[i].nomeProduto, produto1[i].precoProduto, produto1[i].quantidadeProduto);
        printf("\n------------------------\n");
    }
    
}



