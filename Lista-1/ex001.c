/*
1. Faça um programa que calcule e mostre a área de um triângulo.
Sabe-se que: Área = (base * altura)/2.
*/
#include <stdio.h>

int main(void) {
  float base, altura;
  printf("Informe a base>>");
  scanf("%f", &base);
  printf("Informe a altura>>");
  scanf("%f", &altura);
  float area = (base*altura)/2;
  printf("Area>> %.3f\n", area);
  return 0;
}
