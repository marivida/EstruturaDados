/*
1- Faça um programa que peça dois números e verifique (usando if e else) e imprima o maior deles  
*/

#include <stdio.h>

int main()
{
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    if (numero1 > numero2)
    {
        printf("\nO maior numero e o %d\n\n", numero1);
    } else 
    {
        printf("\nO maior numero e o %d\n\n", numero2);
    }
    

    return 0;
}