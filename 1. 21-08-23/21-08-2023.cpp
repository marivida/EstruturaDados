#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    printf("Valor de a: %d\n", a);
    printf("Posicao/endereco de a: %x\n", &a); // x = hexadecimal

    int *p = &a; // *<nome do ponteiro> recebe o endereço hexadecimal onde a variável a está armazenada
    // int *p;
    // p = &a;


    /*
    O PONTEIRO ESTÁ EM UMA POSIÇÃO/ENDEREÇO DE MEMÓRIA E O VALOR DELE, O QUE ELE ARMAZENA, É UM OUTRO ENDEREÇO/POSIÇÃO DE MEMÓRIA
    */

    printf("\nValor de p / para onde p aponta: %x\n", p); // endereço pra onde p aponta
    printf("Posicao de p: %x\n", &p); // endereço onde p está armazenado
    printf("Valor armazenado onde p aponta: %d\n", *p); // valor armazenado naquele endereço que P aponta

    int b = 0;
    p = &b;

    printf("\nValor de b: %d\n", b);
    printf("Posicao/endereco de b: %x\n", &b);

    printf("\nValor de p / para onde p aponta: %x\n", p); // endereço pra onde p aponta
    printf("Posicao de p: %x\n", &p); // endereço onde p está armazenado
    printf("Valor armazenado onde p aponta: %d\n", *p); // valor armazenado naquele endereço que P aponta

    *p = 20;

    printf("\nNovo valor de b: %d\n", b);
}
