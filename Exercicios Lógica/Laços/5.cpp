/*
5 – Faça um programa que leia três valores (A, B, C) e mostre-os na ordem lida.  Em seguida, mostre-os em ordem crescente e decrescente.
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL,"pt-br");

    int vetor[3];
    int temporaria;

    printf("Digite o primeiro numero: ");
    scanf("%d", &vetor[0]);

    printf("Digite o segundo numero: ");
    scanf("%d", &vetor[1]);

    printf("Digite o terceiro numero: ");
    scanf("%d", &vetor[2]);

    printf("\n\nNumeros: \n%d | %d | %d", vetor[0], vetor[1], vetor[2]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if (vetor[i] > vetor[j])
            {
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
            }
        }
        
    }
    printf("\n\nOrdem crescente: \n%d | %d | %d", vetor[0], vetor[1], vetor[2]);


    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if (vetor[i] < vetor[j])
            {
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
            }
        }
        
    }
    printf("\n\nOrdem decrescente: \n%d | %d | %d", vetor[0], vetor[1], vetor[2]);

    return 0;
}