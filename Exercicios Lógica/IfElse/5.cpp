/*
5- Faça um programa para a leitura de duas notas parciais de um aluno.  

A mensagem “Aprovado”, se a média alcançada for maior ou igual a sete;
A mensagem “Aprovado com Distinção”, se a média for igual a dez;
A mensagem “Reprovado” se a média for menor de do que sete;
*/

#include <stdio.h>

int main ()
{

    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    printf("\nSua media foi de %.2f", media);
    if (media == 10)
    {
        printf("\nAPROVADO COM DISTINCAO!\n\n");
    } else if (media >= 7)
    {
        printf("\nAPROVADO.\n\n");
    } else 
    {
        printf("\nREPROVADO.\n\n");
    }
    

    return 0;
}