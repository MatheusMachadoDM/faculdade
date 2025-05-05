package set;

//Um Set é uma coleção que não permite elementos duplicados. Ele é útil quando você quer garantir que cada item apareça apenas uma vez.

import java.util.HashSet;
import java.util.Set;

public class Main {
	public static void main(String[] args) {
		Set<String> frutas = new HashSet<>();
		
		frutas.add("Maça");
		frutas.add("Banana");
		frutas.add("Uva");
		frutas.add("Banana"); //Duplicado será ignorado
		
		for(String lista : frutas) {
			System.out.println(lista);
		}
	}
}
