#include <stdio.h>
#include <locale.h>
typedef unsigned int inteiroSemSinal;

typedef struct p // variavel do tipo 'p' de pessoas, que é uma struct
    {
        int codigo;
        char nome[30];
        int idade;
        float salario;
    };


int main()
{
    setlocale(LC_ALL, "Portuguese");
    // unsigned int numero; // inteiros sem sinal, positivo
    inteiroSemSinal numero; // variavel 'numero' do tipo inteiroSemSinal que é unsigned int

    struct
    {
        int codigo;
        char nome[30];
        int idade;
        float salario;
    } pessoa; // variável 'pessoa' que agrupa tipos de dados diferentes

    printf("Digite o código: ");
    scanf("%d", &pessoa.codigo);
    printf("Digite o nome: ");
    scanf("%s", &pessoa.nome);
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digite o salario: ");
    scanf("%f", &pessoa.salario);

    printf("\nCodigo: %d\tNome: %s\nIdade: %d\tSalario: %.2f\n\n", pessoa.codigo, pessoa.nome, pessoa.idade, pessoa.salario);

    // struct p pessoa1, pessoa2, pessoa3;
    // struct p pessoas[51];
    p pessoa1, pessoa2;

    printf("Tamanho da struct: %d\n\n", sizeof(pessoa1));

    p *pont;

    printf("Endereço de pessoa 1: %p\n", &pessoa1);

    pont = &pessoa1;

    printf("Digite o código pessoa 1: ");
    scanf("%d", &pessoa1.codigo);
    printf("Digite o nome: ");
    scanf("%s", &pessoa1.nome);
    printf("Digite a idade: ");
    scanf("%d", &pessoa1.idade);
    printf("Digite o salario: ");
    scanf("%f", &pessoa1.salario);

    printf("\nCodigo: %d\tNome: %s\nIdade: %d\tSalario: %.2f\n\n", pessoa1.codigo, pessoa1.nome, pessoa1.idade, pessoa1.salario);



    return 0;
}
