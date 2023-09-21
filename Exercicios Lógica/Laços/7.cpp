/*
 7- Uma loja tem tem uma política de descontos de acordo com o valor da compra do cliente. Os descontos começam acima dos R$500. A cada 100 reais acima dos R$500,00 o cliente ganha 1% de desconto cumulativo até 25%. 

 Por exemplo: R$500 = 1% || R$600,00 = 2% … etc…

 Faça um programa que exiba essa tabela de descontos no seguinte formato:  

 Valordacompra – porcentagem de desconto – valor final
*/

#include <stdio.h>

int main()
{

    int compra = 500;

    for (float i = 1; i < 26; i++)
    {
        printf("\nValor da compra: R$ %d || Desconto: %.0f%% || Valor Final: R$ %.2f", compra, i, (compra - (compra*(i/100))));
        compra += 100;
    }
    
    return 0;
}