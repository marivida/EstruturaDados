/*
6 – Uma loja deseja cadastrar 5 clientes e verificar se o faturamento da loja foi superior a loja B (faturamento = 54000).  Se o faturamento atingir esse valor mostre na tela uma mensagem contendo em quanto foi superado o faturamento.]
*/

#include <stdio.h>

int main()
{
  float vendaCLiente = 0, faturamentoLoja = 0;
  int qtdeClientes = 5;

  for (int i = 1; i <= qtdeClientes; i++)
  {
    printf("Informe o valor da venda para o cliente %d: ", i);
    scanf("%f", &vendaCLiente);
    faturamentoLoja += vendaCLiente;
  }

  if (faturamentoLoja > 54000)
  {
    printf("\nA loja A superou a loja B em R$ %.2f reais. Parabens!!!\n\n", faturamentoLoja - 54000);
  }
  else
  {
    printf("\nA loja A nao superou o faturamento da loja B...\n\n");
  }

  return 0;
}