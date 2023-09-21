#include <stdlib.h>
#include <stdio.h>

/*
Crie um código em C que deverá receber um número inteiro do usuário que deverá estar entre 0 e 500, e o mesmo irá retornar (de 0 até o numero digitado pelo usuário):

Quais são pares, quais são ímpares, quais são números primos. No final deverá listar a quantidade de cada um.

Após o cálculo, o programa deverá perguntar se o usuário quer calcular novamente ou sair.
*/

int isPrimo(int numero);

int main()
{
    int numero, contadorPar = 0, contadorImpar = 0, contadorPrimo = 0, condicao = 1;

    do
    {
        contadorPar = 0;
        contadorImpar = 0;
        contadorPrimo = 0;

        printf("Digite um numero de 1 a 500: ");
        scanf("%d", &numero);

        if (numero <= 0 || numero > 500)
        {
            printf("Numero invalido, tente novamente!");
            return 0;
        }

        int numeros[numero + 1];

        for (int i = 0; i <= numero; i++)
        {
            numeros[i] = i;
        }

        for (int i = 0; i <= numero; i++)
        {
            printf("%d | ", numeros[i]);
        }

        printf("\n\nNumeros pares: \n");
        for (int i = 0; i <= numero; i++)
        {
            if (numeros[i] % 2 == 0)
            {
                printf("%d | ", numeros[i]);
                contadorPar += 1;
            }
        }
        printf("\nTotal de numeros pares: %d", contadorPar);

        printf("\n\nNumeros impares: \n");
        for (int i = 0; i <= numero; i++)
        {
            if (numeros[i] % 2 != 0)
            {
                printf("%d | ", numeros[i]);
                contadorImpar += 1;
            }
        }
        printf("\nTotal de numeros impares: %d", contadorImpar);

        printf("\n\nNumeros primos:\n");
        for (int i = 0; i < numero; i++)
        {
            if (isPrimo(i))
            {
                contadorPrimo += 1;
                printf("%d | ", i);
            }
        }
        printf("\nTotal de numeros primos: %d", contadorPrimo);

        printf("\n\nDeseja realizar novamente? \n(1) - CONTINUAR ou (0) - SAIR\n");
        scanf("%d", &condicao);

    } while (condicao != 0);
}

int isPrimo(int numero)
{
    if (numero <= 1)
        return 0;
    for (int i = 2; i < numero; ++i)
    {
        if (numero % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
