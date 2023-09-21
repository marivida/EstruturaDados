/*
9-    Faça um programa que receba a idade de dez pessoas e que calcule e mostre a quantidade de pessoas com idade maior ou igual a 18 anos.
*/

#include <stdio.h>

int main()
{

    int idade, contador = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite a idade: ");
        scanf("%d", &idade);

        if (idade >= 18)
        {
            contador ++;
        }
    }

    printf("Quantidade de pessoas com idade maior ou igual a 18 anos: %d", contador);
    

    return 0;
}