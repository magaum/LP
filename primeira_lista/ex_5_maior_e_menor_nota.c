#include <stdio.h>

/*Dados o número n de alunos de uma turma e suas notas da primeira prova,
determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 10
e nota mínima = 0), não permitindo que sejam digitadas notas inválidas.*/

int main(){

	int n, maior, menor = 11, i, nota;

	scanf("%d", &n);

	for (i = 0; i < n; i ++){
		scanf("%d", &nota);
		while (nota > 10){
			scanf("%d", &nota);
		}
		if (nota > maior){
			maior = nota;
		}
		if (nota < menor){
			menor = nota;
		}
	}
	printf("maior nota %d\nmenor nota %d\n", maior, menor);

	return 0;
}
