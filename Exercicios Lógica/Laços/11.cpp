/*
11- Escreva um aplicativo que recebe inteiro e mostra os números pares e ímpares (separados), de 1 até esse inteiro.
*/

#include <stdio.h>

int main()
{
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero >= 1){
        printf("\nNumeros pares: \n");
        for (int i = 1; i <= numero; i++)
        {
            if (i % 2 == 0 )
            {
                printf(" %d |", i);
            }
        }

        printf("\n\nNumeros impares: \n");
        for (int i = 1; i <= numero; i++)
        {
            if (i % 2 != 0 )
            {
                printf(" %d |", i);
            }
        }
    } else {
        printf("\nNumeros pares: \n");
        for (int i = numero; i <= 1; i++)
        {
            if (i % 2 == 0 )
            {
                printf(" %d |", i);
            }
        }

        printf("\n\nNumeros impares: \n");
        for (int i = numero; i <= 1; i++)
        {
            if (i % 2 != 0 )
            {
                printf(" %d |", i);
            }
        }
    }

    return 0;
}