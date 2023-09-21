/*
2- Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo  
*/

#include <stdio.h>

int main()
{

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero == 0)
    {
        printf("Numero neutro");
    } else if (numero > 0)
    {
        printf("Numero positivo");
    } else 
    {
        printf("Numero negativo");
    }
    
    return 0;
}