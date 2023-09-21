/*
3- Faça um programa que verifique (usando if e else) se uma letra digitada é “F” ou “M”. Conforme a letra escrever: F – Feminino, M- Masculino, Sexo inválido. 
*/

#include <stdio.h>

int main()
{

    char sexo;

    printf("Digite o sexo (M ou F): ");
    scanf("%c", &sexo);

    if (sexo == 'M' || sexo == 'm')
    {
        printf("\nM - Masculino\n\n");
    } else if (sexo == 'F' || sexo == 'f')
    {
        printf("\nF - Feminino\n\n");
    } else 
    {
        printf("\nSexo nao reconhecido... Tente novamente!\n\n");
    }
    
    

    return 0;
}