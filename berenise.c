#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    char nomeProduto[30];
    float precoProduto; 
    int quantidadeProduto;
}produto;
void primerEscolha() {}


int main() 
{
    //Colocarei esse Escolha para ser utilizado no codigo varias veces ja que nao sera preciso pois todas vez que for chamado sera usando um novo valor
    int Escolher = 0;
    produto produto1;
    printf("Bem-vido Ao Mercadinho Da Beren\n");

    scanf("%d", &Escolher);

    switch (Escolher)
    {
        case 1:   
        break;
    
    default:
        break;
    }
}