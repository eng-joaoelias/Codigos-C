/*
Uma loja tem 15 clientes cadastrados e deseja enviar uma correspondência
a cada um deles anunciando um bônus especial. Faça um programa que leia
o código do cliente e o valor de suas compras no ano passado. Calcule e
mostre um bônus de 10% se o valor das compras for menor que R$1.000,00
e de 15%, caso contrário.
*/

#include <stdio.h>
#include <stdlib.h>

#define NUM_CLIENTES 15

typedef struct Cliente {
    int codCliente;
    float totalCompraCliente;
} Cliente;

int main(void) {
    Cliente listaClientes[NUM_CLIENTES];

    for (int cont = 0; cont < NUM_CLIENTES; cont++) {
        printf("CLIENTE %d\n\n", cont + 1);
        printf("Informe aqui o codigo: ");
        scanf("%d", &listaClientes[cont].codCliente);
        printf("Informe quanto foi gasto pelo cliente %d no ano passado: R$", listaClientes[cont].codCliente);
        scanf("%f", &listaClientes[cont].totalCompraCliente);

        float bonus;

        // Calcula o bônus com base no valor das compras
        if (listaClientes[cont].totalCompraCliente < 1000) {
            bonus = 0.1 * listaClientes[cont].totalCompraCliente;
        } else {
            bonus = 0.15 * listaClientes[cont].totalCompraCliente;
        }

        printf("O cliente %d tera um bonus de R$%.2f\n", listaClientes[cont].codCliente, bonus);
    }

    return 0;
}
