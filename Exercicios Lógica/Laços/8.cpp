/*
8 –    Uma companhia de teatro deseja dar uma série de espetáculos. 
a) A direção calcula que a R$5,00 o ingresso. 
b) Serão vendidos 120 ingressos, e que as despesas serão R$ 200,00. 
c) Diminuindo-se R$ 0,50 o preço dos ingressos espera-se que as vendas aumentem em 26 ingressos.
*/

#include <stdio.h>

int main()
{

    float preco = 5;
    int ingressos = 120;

    while (preco > 0)
    {
        printf("\nPreco do ingresso: R$ %.2f || Quantidade de ingressos: %d || Lucro: R$ %.2f", preco, ingressos, (ingressos * preco - 200));
        preco = preco - 0.5;
        ingressos = ingressos + 26;
    }
    
    

    return 0;
}