/*
3 - O cardápio de uma lanchonete é o seguinte:
Especificação Código Preço
Cachorro quente 100 R$10.20
Bauru 101 R$10.30
Batata Frita 102 R$10.50
Hambúrguer 103 R$10.20
Cheeseburger 104 R$10.30
Refrigerante 105 R$3.00
Implemente um programa que leia o código do item pedido, a quantidade e calcule o
valor a ser pago por aquele lanche. Considere que a cada execução somente será
calculado um item. Use o comando switch-case.
*/

#include <stdio.h>

int main() {
    int codItem, qtdItem;
    float preco;
    printf("Informe aqui o item que voce deseja. Opcoes:\n\n");
    printf("Especificacao     Codigo   Preco\n");
    printf("Cachorro quente   100      R$10.20\n");
    printf("Bauru             101      R$10.30\n");
    printf("Batata Frita      102      R$10.50\n");
    printf("Hamburguer        103      R$10.20\n");
    printf("Cheeseburger      104      R$10.30\n");
    printf("Refrigerante      105      R$3.00\n");
    printf("\n\nEscolha seu pedido>>");
    scanf("%d", &codItem);
    printf("Informe a quantidade:");
    scanf("%d", &qtdItem);
    switch(codItem){
        case 100: preco = qtdItem*10.2; break;
        case 101: preco = qtdItem*10.3; break;
        case 102: preco = qtdItem*10.5; break;
        case 103: preco = qtdItem*10.2; break;
        case 104: preco = qtdItem*10.3; break;
        case 105: preco = qtdItem*3; break;
        default: break;
    }
    printf("Total a ser pago: R$%.2f", preco);
    return 0;
}
