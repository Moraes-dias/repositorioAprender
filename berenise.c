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
void primerEscolha() {}

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
int main() 
{
    //Colocarei esse Escolha para ser utilizado no codigo varias veces ja que nao sera preciso pois todas vez que for chamado sera usando um novo valor
    int Escolher = 0;
    produto produto1[vetor];
    printf("Bem-vido Ao Mercadinho Da Beren\n");

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
        {
            /* code */
        }
        
        break;
    
    default:
        break;
    }
    for (int i = 0; i < vetor; i++)
    {
        printf("%s, %.2f, %d", produto1[i].nomeProduto, produto1[i].precoProduto, produto1[i].quantidadeProduto);
        printf("\n------------------------\n");
    }
    
}



