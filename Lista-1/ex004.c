/*
Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande,
cada uma sendo vendida respectivamente por 10, 12 e 15 reais. Faça um
programa em que o usuário forneça a quantidade de camisetas pequenas,
médias e grandes referentes a uma venda, e a máquina informe quanto será
o valor arrecadado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int qtdCamisaPequena, qtdCamisaMedia, qtdCamisaGrande;
    printf("Informe a quantidade de camisas pequenas vendidas>>");
    scanf("%d", &qtdCamisaPequena);
    printf("Informe a quantidade de camisas medias vendidas>>");
    scanf("%d", &qtdCamisaMedia);
    printf("Informe a quantidade de camisas grandes vendidas>>");
    scanf("%d", &qtdCamisaGrande);
    int arrecadacao = qtdCamisaPequena*10 + qtdCamisaMedia*12 + qtdCamisaGrande*15;
    printf("Voce arrecadou R$%d.00\n", arrecadacao);
    return 0;
}
