/*5. Crie uma matriz 3x3 preenchida pelo usuário e exiba os valores formatados.

Saída Esperada:

Matriz inserida:

1 2 3
4 5 6
7 8 9*/

import java.util.Scanner;

public class ex005{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int matriz[][] = new int[3][3];
		
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				System.out.print("Preencha a posição[" + i + "][" + j + "]: ");
				matriz[i][j] = scanner.nextInt();
			}
		}
		
		System.out.println("\nMatriz inserida: ");
		
		for(int i = 0; i < 3; i++) {
			System.out.println("");
			
			for(int j = 0; j < 3; j++) {
				System.out.print(matriz[i][j]);
				
			}
		}
	}
}