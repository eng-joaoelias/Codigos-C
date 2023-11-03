/*
2 - Um funcionário irá receber um aumento de acordo com o seu plano de trabalho,
de acordo com a tabela abaixo:
Plano Aumento
 A 10%
 B 15%
 C 20%
Faça um programa que leia o plano de trabalho e o salário atual de um funcionário e
calcula e imprime o seu novo salário. Use o comando switch-case.
*/

#include <stdio.h>

int main() {
    float salario;
    printf("Informe o salario aqui: R$");
    scanf("%f", &salario);

    char planoDeAumento;
    printf("Informe o plano de aumento para esse funcionario (A, B, ou C): ");
    scanf(" %c", &planoDeAumento);

    float aumento = 0.0;

    switch (planoDeAumento) {
        case 'A':
            aumento = 0.10;
            break;
        case 'B':
            aumento = 0.15;
            break;
        case 'C':
            aumento = 0.20;
            break;
        default:
            printf("Plano de aumento invalido.\n");
            return 1; // Encerra o programa com código de erro
    }

    salario += salario * aumento;

    printf("Assim, esse funcionario passara a receber R$%.2f\n", salario);

    return 0;
}
