/*
3 –  Faça um programa que verifique e mostre os números entre 1.000 e 2.000 (inclusive) que, quando divididos por 11 produzam resto igual a 2.
*/

#include <stdio.h>

int main()
{

    int contador = 0;

    for (int i = 1000; i <= 2000; i++)
    {
        if (i % 11 == 2)
        {
            printf("%d | ", i);
            contador ++;
        }
    }

    printf("\n\nTotal de numeros que satisfazem a condicao: %d", contador);
    

    return 0;
}