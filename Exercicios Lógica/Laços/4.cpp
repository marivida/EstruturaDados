/*
4 – Faça um programa que leia um valor n, inteiro e positivo, calcule e mostre a seguinte soma: S = 1 + 1/2 + 1/3 + 1/4 + … + 1/n.
*/

#include <stdio.h>

int main()
{

    int numero;
    float soma = 0;

    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &numero);

    if (numero < 0) 
        return 0;

    for (float i = 1; i <= numero; i++)
    {
        soma += (1/i);
    }

    printf("Resultado: %.2f", soma);
    

    return 0;
}