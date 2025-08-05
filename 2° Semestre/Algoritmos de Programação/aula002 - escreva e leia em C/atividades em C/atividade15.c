#include <stdio.h>
#include <locale.h>
//15. Uma fabrica de refrigerantes vende seu produto em três formatos: lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros. Tomando por base que um comerciante compre uma determinada quantidade de cada um dos formatos disponíveis, escreva um algoritmo para calcular quantos litros de refrigerante ele comprou.

int main(){
    setlocale(LC_ALL, "portuguese");

    int refri350, refri600, refri2L, q350, q600, q2000, total;

    printf("Quantas lata de 350ml você comprou? ");
    scanf("%d", &refri350);

    printf("Quantas garrafas de 600ml você comprou? ");
    scanf("%d", &refri600);

    printf("Quantas garrafas de 2L você comprou? ");
    scanf("%d", &refri2L);

    q350 = refri350 * 350;
	q600 = refri600 * 600;
	q2000 = refri2L * 2000;

    total = (q350 + q600 + q2000) / 1000;

    printf("A quantidade total em litros de refrigerante que você comprou é de %dL", total);
    return 0;
}