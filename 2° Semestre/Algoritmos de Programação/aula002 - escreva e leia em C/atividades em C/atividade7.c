#include <stdio.h>
#include <locale.h>
//7.Escreva um algoritmo que calcule e mostre o consumo médio e a autonomia que um veículo ainda teria antes de um abastecimento de combustível. Considere que o veículo sempre seja abastecido até encher o tanque e que são fornecidas apenas a capacidade do tanque, a quantidade de litros abastecidos e a quilometragem percorrida desde o último abastecimento.

int main(){
    setlocale(LC_ALL, "portuguese");

    float consumoM, autonomia, capacidadeTanque, litrosAbastecidos, kmPercorrido;

    printf("Quantos litros cabem no seu tanque? ");
    scanf("%f", &capacidadeTanque);

    printf("Quantos litros você abasteceu? ");
    scanf("%f", &litrosAbastecidos);

    printf("Quantos quilometros você percorreu até decidir abastecer? ");
    scanf("%f", &kmPercorrido);

    consumoM = kmPercorrido / litrosAbastecidos;
    autonomia = (capacidadeTanque - litrosAbastecidos) * consumoM;

    printf("Seu consumo médio é de %fkm por litro e sua autonomia antes de abastecer seria de mais %fkm", consumoM, autonomia);
    
    return 0;
}