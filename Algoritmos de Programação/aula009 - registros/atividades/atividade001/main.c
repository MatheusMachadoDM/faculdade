#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1.Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o nome do
aluno, o nome da disciplina e as notas do aluno em duas provas. Em seguida, leia os dados de três
alunos e os armazena nessa estrutura. Por fim, exiba o nome do aluno, o nome da disciplina e a média
dos alunos que foram aprovados com média igual ou superior a 6.*/

struct Aluno{
	char nome[31], disciplina[21];
	float nota[2];
};

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	struct Aluno aluno[3];
	int i;
	float media[3];
	
	for(i = 0; i < 3; i++){
		printf("Digite o nome do aluno: ");
		scanf(" %30[^\n]", aluno[i].nome);
		
		printf("Digite a disciplina: ");
		scanf(" %20[^\n]", aluno[i].disciplina);
		
		printf("Digite a primeira nota: ");
		scanf("%f", &aluno[i].nota[0]);
		
		printf("Digite a segunda nota: ");
		scanf("%f", &aluno[i].nota[1]);
		
		media[i] = (aluno[i].nota[0] + aluno[i].nota[1]) / 2;
		
		printf("\n");
	}
	
	for(i = 0; i < 3; i++){
		
		if(media[i] >= 6){
			printf("O aluno %s na disciplina %s ficou com a media %.2f! APROVADO!\n", aluno[i].nome, aluno[i].disciplina, media[i]);
		}else{
			printf("O aluno %s na disciplina %s ficou com a media %.2f! REPROVADO!\n", aluno[i].nome, aluno[i].disciplina, media[i]);
		}
	}
	return 0;
}
