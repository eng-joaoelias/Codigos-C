/*
1 - Desenvolver um programa que calcule e imprima o custo de transporte de um
frete. O programa dever ler do teclado o valor do custo FIXO do transporte e o
destino do frete e calcular o valor do frete de acordo com a seguinte tabela:
DESTINO CUSTO
 1 0.5 * FIXO
 2 0.3 * FIXO
 3 0.8 * FIXO
 4 1.5 * FIXO
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int destino;
    printf("Informe o destino>>");
    scanf("%d", &destino);
    printf("Qual o custo fixo de manutencao de transporte? R$");
    float fixo;
    scanf("%f", &fixo);
    float custo;
    switch(destino){
        case 1: custo = 0.5*fixo; break;
        case 2: custo = 0.3 * fixo; break;
        case 3: custo = 0.8 * fixo; break;
        case 4: custo =  1.5 * fixo; break;
        default: break;
    }
    printf("O frete ira custar R$%.2f", custo);
    return 0;
}
