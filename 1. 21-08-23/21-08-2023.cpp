#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    printf("Valor de a: %d\n", a);
    printf("Posicao/endereco de a: %x\n", &a); // x = hexadecimal

    int *p = &a; // *<nome do ponteiro> recebe o endere�o hexadecimal onde a vari�vel a est� armazenada
    // int *p;
    // p = &a;


    /*
    O PONTEIRO EST� EM UMA POSI��O/ENDERE�O DE MEM�RIA E O VALOR DELE, O QUE ELE ARMAZENA, � UM OUTRO ENDERE�O/POSI��O DE MEM�RIA
    */

    printf("\nValor de p / para onde p aponta: %x\n", p); // endere�o pra onde p aponta
    printf("Posicao de p: %x\n", &p); // endere�o onde p est� armazenado
    printf("Valor armazenado onde p aponta: %d\n", *p); // valor armazenado naquele endere�o que P aponta

    int b = 0;
    p = &b;

    printf("\nValor de b: %d\n", b);
    printf("Posicao/endereco de b: %x\n", &b);

    printf("\nValor de p / para onde p aponta: %x\n", p); // endere�o pra onde p aponta
    printf("Posicao de p: %x\n", &p); // endere�o onde p est� armazenado
    printf("Valor armazenado onde p aponta: %d\n", *p); // valor armazenado naquele endere�o que P aponta

    *p = 20;

    printf("\nNovo valor de b: %d\n", b);
}
