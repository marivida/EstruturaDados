// INSERIR
// 1. Alocar memoria que caiba a struct (malloc) no ponteiro *aux
// 2. Verificar se 'aux' é diferente de nulo, se o sistema conseguiu alocar a memória
// 3. Solicitar os dados para o usuario e gravar na 'aux'
// 4. 'aux -> prox' deve apontar para o 'topo'
// 5. 'topo' passa a ser o novo elemento adicionado 'topo = aux'

// LISTAR
// 1. Verificar se 'topo = null', se 'topo' for nulo não faz sentido listar os elementos
// 2. 'aux = topo', auxiliar vai por começo da pilha
// 3. Listar os campos (while (aux != null))
// 4. 'aux = aux->prox' auxiliar recebe o endereço do proximo elemento da pilha

// APAGAR (sempre o elemento do topo)
// 1. Verificar se 'topo = null', se 'topo' for nulo não faz sentido apagar os elementos
// 2. aux = topo
// 3. topo = topo -> prox
// 4. free(aux)




#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa {
    int ra;
    // char nome[30];
    pessoa *prox;
};

int main()
{
    pessoa *topo = NULL, *aux;
    int op;

    do
    {
        printf("\nDigite a opcao: \n1. Inserir \n2. Remover \n3. Listar \n4. Limpar \n0. Sair\n");
        scanf("%d", &op);

        switch (op)
        {
            case 1: // Inserir
                aux = (pessoa*) malloc(sizeof(pessoa)); // guardar em 'aux' o endereço de memoria onde sera guardado uma variavel do tipo 'pessoa', está reservado
                if (aux == NULL){
                    printf("Memoria insuficiente");
                } else{
                    printf("Digite o RA: ");
                    scanf("%d", &aux->ra);
                    aux->prox = topo;
                    topo = aux;
                }
                break;

            case 2: //Remover
                if(topo == NULL){
                    printf("Topo vazio.");
                } else {
                    aux = topo;
                    topo = topo->prox;
                    free(aux);
                }
                break;

            case 3: // Listar

               system("cls");
                if (topo == NULL) {
                    printf("\nTopo vazio.");
                } else {
                    printf("\n");
                    aux = topo;
                    while (aux != NULL){
                        printf("RA: %d\n", aux -> ra);
                        aux = aux->prox;
                    }
                }
                break;

            case 4: // Limpar
                if(topo == NULL){
                    printf("Pilha vazia.");
                } else {
                    do {
                        aux = topo;
                        topo = topo->prox;
                        free(aux);
                    } while (topo!= NULL);
                }
                break;
            break;

            case 0: // Sair
                printf("\nATE A PROXIMA\n\n");
                break;

            default:
                printf("\nOpcao invalida!\n\n");
        };

    } while (op != 0);





    return 0;
}
