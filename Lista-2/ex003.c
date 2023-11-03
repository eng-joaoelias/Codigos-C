/*
3. Uma empresa decidiu dar um aumento escalonado a seus funcionários de acordo
com a seguinte regra:
13% para os salários inferiores ou iguais a R$200,00;
11% para os salários situados entre R$ 200,00 e R$400,00 (inclusive);
9% para os salários entre R$400,00 e R$800,00(inclusive) e
7% para os demais salários.
Escreva um programa que receba o salário atual de um funcionário e forneça o valor do seu
novo salário.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float salario;
    printf("Informe o salario>>R$");
    scanf("%f", &salario);
    float novoSalario;
    if(salario<=200){
        novoSalario = salario*1.13;
    } else if(salario > 200 && salario <= 400){
        novoSalario = salario*1.11;
    } else if(salario > 400 && salario <= 800){
        novoSalario = salario*1.09;
    } else{
        novoSalario = salario*1.07;
    }
    printf("Novo salario para o funcionario que recebia R$%.2f: R$%.2f", salario, novoSalario);
    return 0;
}
