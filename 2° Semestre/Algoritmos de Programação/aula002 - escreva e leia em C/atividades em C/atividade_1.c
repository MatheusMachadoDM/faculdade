#include <stdio.h>
//1. Escreva um algoritmo que calcule a área de um triângulo cuja fórmula é base x altura / 2.
int main(){
    
    float base, altura, area;
    
    printf("Informe a base: ");
    scanf("%f", &base);
    
    printf("Informe a altura: ");
    scanf("%f", &altura);

    area = base * altura / 2;

    printf("A area e: %f", area);
    
    return 0;
}
