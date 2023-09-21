/*
12- Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado daquele tamanho com asteriscos. Seu programa deve usar laços de repetição e funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.
*/

#include <stdio.h>

int main()
{
    int lado;

    printf("Digite o tamanho do lado do quadrado (entre 1 e 20): ");
    scanf("%d", &lado);

    if (lado < 1 || lado > 20)
    {
        printf("\n\nTamanho incompativel... Tente novamente\n\n");
        return 0;

    }
    


    for (int i = 0; i < lado; i++)
    {
        for (int j = 0; j < lado; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    

    return 0;
}