#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void PrimerEscolha() {}

int main() 
{
    //Colocarei esse Escolha para ser utilizado no codigo varias veces ja que nao sera preciso pois todas vez que for chamado sera usando um novo valor
    int Escolher = 0;

    printf("Bem-vido Ao Mercadinho Da Beren\n");
    printf("Coloque seu usuario e senha para Entrar\n");
    printf("Se nao estiver cadastrado escolha 3 para se cadatrar\n");
    scanf("%d", &Escolher);

    switch (Escolher)
    {
        case 1:   
        break;
    
    default:
        break;
    }
}