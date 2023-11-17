/*
Escrever um programa que leia um conjunto de 10 informações contendo,
cada uma delas, a altura e o sexo de uma pessoa, calcule e mostre a maior e
a menor altura da turma.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD_PESSOAS 3

typedef struct Pessoa{
    float altura;
    char sexo;
} Pessoa;

int main(void){
    
    Pessoa listaPessoas[QTD_PESSOAS];
    
    float maior = 0;
    
    float menor = 9999;
    
    for(int i = 0; i < QTD_PESSOAS; i++){
        printf("PESSOA %d\n\n", i+1);
        printf("Informe a altura (m)>>");
        scanf("%f", &listaPessoas[i].altura);
        printf("Informe o sexo (M/F)>>");
        scanf(" %c", &listaPessoas[i].sexo);
        if(listaPessoas[i].altura > maior){
            maior = listaPessoas[i].altura;
        }
        if(listaPessoas[i].altura < menor){
            menor = listaPessoas[i].altura;
        }
    }
    
    printf("Maior altura no conjunto: %.2fm\n", maior);
    printf("Menor altura no conjunto: %.2fm\n", menor);
    
    return 0;
}
