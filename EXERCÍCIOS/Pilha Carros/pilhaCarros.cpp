/*
Uma empresa precisa controlar os carros que est�o no galp�o. Esse galp�o possui apenas uma linha de entrada e por onde os carros entram.
N�o tem como sair por caminhos alternativos, portanto o �ltimo carro que entrou ser� o primeiro a sair.
Dessa forma usando a linguagem C, structs e aloca��o din�mica de mem�ria, crie o c�digo para controlar os carros que existem no galp�o com os seguintes dados:
- Cod
- Marca
- Modelo
- AnoModelo
- AnoFab
- Placa
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct carro
{
    int codigo;
    char marca[20];
    char modelo[30];
    int anoModelo;
    int anoFabricacao;
    char placa[7];
    carro *prox;
    
};

int main()
{
    carro *topo = NULL, *aux;
    int op;

    do
    {
        printf("\nDigite a opcao: \n1. Inserir \n2. Remover \n3. Listar \n4. Limpar \n0. Sair\n");
        scanf("%d", &op);

        switch(op)
        {
        case 1:
            aux = (carro*) malloc(sizeof(carro));
                if (aux == NULL){
                    printf("Memoria insuficiente");
                } else{
                    printf("Digite o codigo do carro: ");
                    scanf("%d", &aux->codigo);
                    printf("Digite a marca do carro: ");
                    scanf("%s", aux->marca);
                    printf("Digite o modelo do carro: ");
                    scanf("%s", aux->modelo);
                    printf("Digite o ano do modelo do carro: ");
                    scanf("%d", &aux->anoModelo);
                    printf("Digite o ano de fabricacao do carro: ");
                    scanf("%d", &aux->anoFabricacao);
                    printf("Digite a placa do carro: ");
                    scanf("%d", &aux->placa);
                    aux->prox = topo;
                    topo = aux;
                    system("cls");
                }
            break;

        case 2:
            system("cls");

            printf("\nUltimo elemento removido.\n");

            if(topo == NULL){
                    printf("Topo vazio.");
                } else {
                    aux = topo;
                    topo = topo->prox;
                    free(aux);
                }

            break;

        case 3:
            system("cls");
            if (topo == NULL) {
                printf("\nTopo vazio.");
            } else {
                printf("\n");
                aux = topo;
                while (aux != NULL){
                    printf("Codigo do carro: %d\n", aux -> codigo);
                    printf("Marca do carro: %s\n", aux -> marca);
                    printf("Modelo do carro: %s\n", aux -> modelo);
                    printf("Ano do modelo do carro: %d\n", aux -> anoModelo);
                    printf("Ano de fabricacao do carro: %d\n", aux -> anoFabricacao);
                    printf("Placa do carro: %s\n\n\n", aux -> placa);
                    aux = aux->prox;
                }
            }

            getch();
            system("cls");

            break;

        case 4:
            printf("\nPilha limpa.\n");

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

        case 0:
            printf("\nATE A PROXIMA!!\n\n");
            break;

        default:
            printf("\nOpcao invalida!\n");
        }

    } while (op != 0);
}
