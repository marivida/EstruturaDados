#include <stdio.h>
#include <stdlib.h>

typedef struct p{
        int cod;
        char nome[30];
        int idade;
        float salario;
    };
int main(){
    p *pont = (p*) malloc(sizeof(p));
    printf ("Digite o codigo: ");
    scanf ("%d", &pont->cod);
    printf ("Digite o nome: ");
    scanf ("%s", &pont->nome);
    printf ("Digite a idade: ");
    scanf ("%d", &pont->idade);
    printf ("Digite o salario: ");
    scanf ("%f", &pont->salario);

    printf ("Codigo: %d\t", pont->cod);
    printf ("Nome: %s\n", pont->nome);
    printf ("Idade: %d\t", pont->idade);
    printf ("Salario: %.2f\n", pont->salario);

    free (pont);
}
