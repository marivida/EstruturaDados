/*
1 – Faça um programa que receba um número e usando laços de repetição calcule e mostre a tabuada desse número.
*/

#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\n\nTabuada do %d:\n", numero);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    
    return 0;
}