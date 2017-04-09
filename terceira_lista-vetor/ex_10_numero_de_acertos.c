#include <stdio.h>

/*

	Deseja-se se publicar o número de acertos de cada aluno em uma prova em forma de testes. 
	A prova consta de 30 questões, cada uma com cinco alternativas identificadas por A, B, C, D e E. Para isso são dados:
	a. o cartão gabarito;
	b. o número de alunos da turma;
	c. o cartão de respostas para cada aluno, contendo o seu número e suas respostas.

*/

int main(){

	char gabarito[30],respostas[30];
	int alunos,i,j, pontos;

	for (i=0;i<30;i++){
		printf("\nDigite a alternativa correta da pergunta %d: ",i+1);
		scanf("%c",&gabarito[i]);
			__fpurge(stdin);
	}
	printf("\nDigite a quantidade de alunos da turma: ");
	scanf("%d", &alunos);
	__fpurge(stdin);

	for (i=1;i<=alunos;i++){
		pontos=0;
		printf("\nDigite as respostas do aluno %d\n", i);
		for(j=0;j<30;j++){
			printf("Pergunda %d: ",j+1);
			scanf("%c",&respostas[j]);
			__fpurge(stdin);
			if (respostas[j]==gabarito[j]){
				pontos++;
			}
		}
		printf("\nAluno %d fez %d pontos.\n", i,pontos);
	}
}
