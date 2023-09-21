#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Ponteiro � uma variavel que armazena um endere�o de memoria que aponta para um local da memoria onde tem um valor daquele determinado tipo (tipo do ponteiro deve ser declarado)
    */

    int a; // declara��o da vari�vel 'a'
    int *p; // declara��o do ponteiro 'p'

    printf("Tamando de 'a': %d | Tamanho de 'p': %d", sizeof(a), sizeof(p)); // tamanho das vari�veis na mem�ria

    a = 10; // 'a' recebe 10

    p = &a; // 'p' recebe o endere�o de memoria onde 'a' est� localizado

    printf("\n\nVariavel 'a': %d", a);
    printf("\nEndereco de 'a': %x", &a);

    printf("\n\nVariavel 'p': %x", p);
    printf("\nEndereco de 'p': %x", &p);
    printf("\nValor de 'a' atraves do ponteiro 'p': %d", *p); // quando usamos o '*p', o que � mostrado � o valor que est� armazenado no endere�o guardado em p




    /*
    MALLOC - neste endere�o de mem�ria vc aloca tantos bytes
    (tipo *) malloc (x bytes)*/

    int *x;
    x = (int*) malloc(sizeof(int)); // guarda em 'x' um endereco de memoria onde caiba o tamanho de um inteiro, no caso 4 bytes
                                    // 'x' aponta pra um lugar que tem 4 bytes reservados
    *x = 10; // coloca o 10 no endereco de memoria que esta guardado no ponteiro 'x'

    // int *x = (int*) malloc(sizeof(int));

    printf("\n\nEndereco de X: %p", &x );
    printf("\nEndereco de X: %x", &x );
    printf("\nX aponta para: %p", x);
    printf("\nValor de X: %d\n\n\n", *x);


    return 0;
}
