/*
Faça um programa que leia o peso de uma pessoa, a altura, e calcule o
índice de massa corpórea(IMC). Mostre o resultado na tela. A Fórmula para
calcular o IMC = peso / altura2
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    float peso, altura;
    printf("Qual seu peso? Informe o VALOR>>");
    scanf("%f", &peso);
    printf("Qual sua altura? Informe o VALOR>>");
    scanf("%f", &altura);
    float IMC = peso/(pow(altura, 2));
    printf("Seu IMC eh: %.2f\n", IMC);
    return 0;
}
