/*
1. Um supermercado resolveu calcular a média de valores de seus produtos,
sabendo que este supermercado possui 20 produtos, faça um programa que
calcule esta média.
*/

#include <stdio.h>
#include <stdlib.h>

#define NUM_PROD 20

void clearBuffer() {
    while (getchar() != '\n');
}

int main() {
    float precos[NUM_PROD];
    float acumPrecos = 0;

    printf("Bem-vindo ao Supermercado XYZ\n");
    printf("Vamos calcular o preco medio dos produtos!\n\n");

    for (int cont = 0; cont < NUM_PROD; cont++) {
        printf("\n---------------------------------------\n");
        printf("Produto %d\n", cont + 1);

        float preco;
        printf("Informe o preco (R$): ");

        // Loop para garantir entrada válida (não negativa)
        while (1) {
            // Verifica se a entrada é um número válido e maior ou igual a zero
            if (scanf("%f", &preco) == 1 && preco >= 0) {
                break; // Sai do loop se a entrada for válida
            } else {
                // Mensagem de erro se a entrada for inválida
                printf("\nEntrada invalida! Por favor, insira um valor valido (maior ou igual a 0).\n");
                
                // Limpa o buffer de entrada para evitar loops infinitos
                clearBuffer();
                printf("Informe o preco (R$): ");
            }
        }

        // Armazena o preço na lista e acumula o total
        precos[cont] = preco;
        acumPrecos += precos[cont];
    }

    // Calcula o preço médio
    float precoMedio = acumPrecos / NUM_PROD;

    // Exibe o preço médio com uma mensagem amigável
    printf("\n---------------------------------------\n");
    printf("No Supermercado XYZ, o preco medio dos produtos eh de R$%.2f\n", precoMedio);
    printf("Obrigado por utilizar nosso programa!\n");

    return 0;
}
