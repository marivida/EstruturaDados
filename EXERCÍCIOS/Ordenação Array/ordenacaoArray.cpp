/*
Crie um array numérica inteira com 30 valores (entre 0 e 500). Gere os números aleatórios com a função rand(). Exemplo:

// gerando valores aleatórios entre zero e 100
vetor[0] = rand() % 500;
Ordene esse array do menor para o maior número, exiba na tela o array antigo e o array novo ordenado.

Obs: As únicas bibliotecas permitidas são: <stdio.h> e <stdlib> (para a função rand).

Obs2: Não poderá usar função pré-definida para ordenação.
*/

// #include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[30], temporaria;

    // srand(time(NULL)); // com biblioteca <time.h>

    printf("Array original: \n");
    for (int i = 0; i < 30; i++)
    {
        vetor[i] = rand() % 500;
        printf("\t%d", vetor[i]);
        if (i % 10 == 9)
        {
            printf("\n");
        }
    }

    for (int i = 0; i < 30; i++)
    {
        for (int j = i + 1; j < 30; j++)
        {
            if (vetor[j] < vetor[i])
            {
                temporaria = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = temporaria;
            }

        }

    }

    printf("\n\nArray ordenado: \n");
    for (int i = 0; i < 30; i++)
    {
        printf("\t%d", vetor[i]);
        if (i % 10 == 9)
        {
            printf("\n");
        }
    }




    return 0;
}
