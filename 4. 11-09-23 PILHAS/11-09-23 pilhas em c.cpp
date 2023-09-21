#include <stdio.h>

typedef struct pessoa // definindo variavel do tipo 'pessoa', que e uma struct
    {
        int ra;
        // char nome[30];
        // char cpf[11];

        pessoa *proximo; // ponteiro que guarda o endereço do elemento de baixo da pilha, o próximo elemento, do tipo 'pessoa'
    };

int main()
{


    return 0;
}
