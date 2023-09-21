/*
10-    Faça um programa que receba a idade de 15 pessoas e que calcule e mostre:
a) A quantidade de pessoas em cada faixa etária;
b) A percentagem de pessoas na primeira e na última faixa etária, com relação ao total de pessoas: 

Até 15 anos
De 16 a 30 anos
De 31 a 45 anos
De 46 a 60 anos
Acima de 61 anos
*/

#include <stdio.h>

int main()
{

    int idade, ate15 = 0, de16a30 = 0, de31a45 = 0, de46a60 = 0, acima61 = 0;
    float total = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade <= 15)
        {
            ate15 ++;
        } else if (idade > 15 && idade <= 30)
        {
            de16a30 ++;
        } else if (idade > 30 && idade <= 45)
        {
            de31a45 ++;
        } else if (idade > 45 && idade <= 60)
        {
            de46a60 ++;
        } else 
        {
            acima61 ++;
        }
        
        total ++;
    }
    
    printf("\n\nTotal ate 15 anos: %d", ate15);
    printf("\nTotal de 16 a 30 anos: %d", de16a30);
    printf("\nTotal de 31 a 45 anos: %d", de31a45);
    printf("\nTotal de 46 a 60 anos: %d", de46a60);
    printf("\nTotal acima de 61 anos: %d", acima61);

    printf("\n\nPorcentagem ate 15 anos: %.2f%%", (ate15/total)*100);
    printf("\nPorcentagem acima de 61 anos: %.2f%%\n\n", (acima61/total)*100);

    return 0;
}