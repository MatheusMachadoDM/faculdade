package map;

//Um Map armazena pares chave-valor. 
//As chaves são únicas, mas os valores podem se repetir. Ele não implementa diretamente Collection, mas faz parte da API de coleções.

import java.util.HashMap;
import java.util.Map;

public class Main {
	public static void main(String[] args) {
		Map<String, Integer> pessoas = new HashMap<>();
		
		pessoas.put("Ana", 20);
		pessoas.put("José", 25);
		pessoas.put("Ana", 30); //Sobrescreve a chave "Ana"
		
		for(String nome : pessoas.keySet()) {
			Integer idade = pessoas.get(nome);
			System.out.println("Nome: " + nome + " Idade: " + idade);
		}
		
		//Verificando se a chave existe
		if(pessoas.containsKey("José")) {
			System.out.println("José está cadastrado");
		}
		
		pessoas.remove("José"); //Removendo uma chave
		
		if(pessoas.containsKey("José")) {
			System.out.println("José está cadastrado");
		}
		
	}
}
