#include <stdio.h>
#include <locale.h>
//13.Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa. Assumindo que seja possível medir sua sombra e a sombra do prédio no chão, e que você lembre de sua altura, escreva um algoritmo para ler os dados necessários e calcular a altura do prédio.

int main(){
    setlocale(LC_ALL, "portuguese");

    float alturaPessoa, alturaPredio, sombraPessoa, sombraPredio, resultado;

    printf("Digite sua altura em metros: ");
    scanf("%f", &alturaPessoa);

    printf("Quanto mede a sua sombra em metros? ");
    scanf("%f", &sombraPessoa);

    printf("Quanto mede a sobra do prédio em metros? ");
    scanf("%f", &sombraPredio);


    resultado = sombraPredio / sombraPessoa;

    alturaPredio = alturaPessoa * resultado;

    printf("A alturado prédio é de %f metros! ", resultado);

    return 0;
}