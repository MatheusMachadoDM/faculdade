package lista;

import java.util.ArrayList;
import java.util.List;

public class Main {
	public static void main(String[] args) {
		List<String> nomes = new ArrayList<>();
		
		nomes.add("Jorge");
		nomes.add("José");
		nomes.add("Jorge"); //Duplicado permitido
		
		for(int i = 0; i < 3; i++) {
			System.out.println("nomes[" + i + "] = " + nomes.get(i));
		}
	}
}
