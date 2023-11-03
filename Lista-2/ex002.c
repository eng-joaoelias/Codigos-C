/*
2. Imagine uma prova com 100 questões, cada uma valendo 1 ponto, devendo o
resultado ser divulgado através de conceitos de acordo com a seguinte tabela:
Pontos Conceito
0 a 49 D
50 a 69 C
70 a 89 B
90 a 100 A
Escreva um programa que exiba o conceito da pontuação obtida
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nota = 101;
    
    while(nota < 0 || nota > 100){
        
        printf("Informe a nota do aluno>>");
        scanf("%d", &nota);
        
    }
    
    char conceito;
    
    if(nota >= 0 && nota <= 49){
        
        conceito = 'D';
        
    } else if(nota >= 50 && nota <= 69){
        
        conceito = 'C';
        
    } else if(nota >= 70 && nota <= 89){
        
        conceito = 'B';
        
    } else{
        
        conceito = 'A';
        
    }
    
    printf("Conceito do aluno de nota %d: %c", nota, conceito);
    return 0;
}
