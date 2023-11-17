/*
Faça um programa que receba a idade de 10 pessoas e que calcule e
mostre a quantidade de pessoas com idade maior ou igual a 18 anos.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD_PESSOAS 10

int main(void){
    
    int idades[QTD_PESSOAS];
    int qtdPessoasMais18Anos = 0;
    
    for(int i = 0; i<QTD_PESSOAS; i++){
        printf("PESSOA %d\n\n", i+1);
        printf("Informe a idade>>");
        scanf("%d", &idades[i]);
        if(idades[i] >= 18){
            qtdPessoasMais18Anos++;
        }
    }
    
    printf("Na lista, existem %d pessoas com + de 18 anos", qtdPessoasMais18Anos);
    
    return 0;
}
