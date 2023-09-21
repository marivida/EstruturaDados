/*
4- Faça um programa que verifique (usando if e else) se uma letra digitada é vogal ou consoante.  
*/

#include <stdio.h>

int main()
{

    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
    {
        printf("\nA letra %c e uma VOGAL.\n\n", letra);
    } else 
    {
        printf("\nA letra %c e uma CONSOANTE.\n\n", letra);
    }
    

    return 0;
}