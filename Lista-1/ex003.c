/*
 Faça um programa que receba o custo de um espetáculo teatral e o preço do
convite desse espetáculo. Esse programa deve calcular e mostrar a
quantidade de convites que devem ser vendidos para que pelo menos o
custo do espetáculo seja alcançado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float custo, precoIngresso;
    printf("Informe o custo do espetaculo>>R$");
    scanf("%f", &custo);
    printf("Informe o preco do ingresso>>R$");
    scanf("%f", &precoIngresso);
    float qtdIngressos = custo/precoIngresso;
    printf("Pelo menos, devem ser vendidos %.0f ingressos\npara cobrir com os gastos.", qtdIngressos);
    return 0;
}
