#include <stdio.h>
#include <locale.h>

/*6.Escreva um programa que calcule o produto escalar entre dois vetores de inteiros de tamanho igual a
5. Exemplo: {0, 2, 4, 6, 8} x {1, 3, 5, 7, 9} = 0 * 1 + 2 * 3 + 4 * 5 + 6 * 7 + 8 * 9 = 140.*/

int main() {
    setlocale(LC_ALL,"portuguese");
    
    int vetorA[5], vetorB[5], i, soma = 0;
    
    printf("Digite uma sequência de 5 números para calcularmos seu produto escalar: \n");
    
    for(i = 0; i < 5; i++){
        printf("\nDigite o número %d: ", i +1);
        scanf("%d", &vetorA[i]);
    }
    
    printf("\nDigite a seguna sequência: \n");
    
    for(i = 0; i < 5; i++){
        printf("\nDigite o número %d: ", i +1);
        scanf("%d", &vetorB[i]);
        
        soma = soma + vetorA[i] * vetorB[i];
    }
    
    printf("\nO produto escalar entre estes dois vetores é: %d", soma);
    
    return 0;
}
