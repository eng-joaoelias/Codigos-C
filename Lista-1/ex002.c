/*
Faça um programa que receba o salário de um funcionário, calcule e mostre o novo
salário, sabendo-se que este sofreu um aumento de 25%.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float salario;
  printf("Informe o salario>>");
  scanf("%f", &salario);
  salario = 1.25 * salario;
  printf("Novo salario>> %.2f\n", salario);
  return 0;
}
