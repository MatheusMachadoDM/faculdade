#include <stdio.h>
#include <locale.h>
//11. Escreva um algoritmo que leia o número de votos brancos, o número de votos nulos e o número de votos válidos em um município. Em seguida, calcule e escreva o percentual de votos brancos, nulos e válidos em relação ao total de eleitores do município.

int main(){
    setlocale(LC_ALL, "portuquese");

    float vNulo, vBranco, vValido, vTotal, vNuloPorcent, vBrancoPorcent, vValidoPorcent;

    printf("Qual foi a quantidade de votos nulos? ");
    scanf("%f", &vNulo);

    printf("Qual foi a quantidade de votos em branco? ");
    scanf("%f", &vBranco);

    printf("Qual foi a quantidade de votos validos? ");
    scanf("%f", &vValido);

    vTotal = vNulo + vBranco + vValido;
    
    vNuloPorcent = vNulo / vTotal * 100;
    vBrancoPorcent = vBranco / vTotal * 100;
    vValidoPorcent = vValido / vTotal * 100;

    printf("A quantidade total foi de %f votos, sendo %f porcento nulos, %f porcento brancos e %f porcento válidos", vTotal, vNulo, vBranco, vValido);

    return 0;
}

