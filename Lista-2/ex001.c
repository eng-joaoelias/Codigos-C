/*
1. Desenvolva um programa para calcular e mostrar o desconto no valor de uma
compra (fornecido pelo usuário), de acordo com a tabela:
Valor Desconto
Até R$ 1000,00 10%
De R$ 1001,00 a R$ 5000,00 20%
Acima de R$ 5001,00 30%
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float valCompra;
    printf("Informe aqui o valor da compra>>R$");
    scanf("%f", &valCompra);
    float desconto;
    if(valCompra <= 1000){
        desconto = 0.1*valCompra;
    } else if(valCompra >= 1001 && valCompra <= 5000){
        desconto = 0.2*valCompra;
    } else{
        desconto = 0.3*valCompra;
    }
    
    printf("Para uma compra de R$%.2f voce ganha R$%.2f de desconto", valCompra, desconto);

    return 0;
}
