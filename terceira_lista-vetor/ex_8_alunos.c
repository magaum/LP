#include <stdio.h>

/*
	Fazer um programa em C para ler uma quantidade N de alunos. Ler a nota de cada
um dos N alunos e calcular a média aritmética das notas. Contar quantos alunos
estão com a nota acima de 5.0. Obs.: Se nenhum aluno tirou nota acima de 5.0,
imprimir mensagem: Não há nenhum aluno com nota acima de 5.
*/

int main(){

	float media=0,nota=0;
	int alunos,acima_de_5=0,i;
	
	printf("Digite a quantidade de alunos: ");
	scanf("%d",&alunos);
	for (i=1;i<=alunos;i++){
		printf("Digite a nota do %d° aluno: ",i);
		scanf("%f",&nota);
		if (nota > 5){
			acima_de_5++;
		}
		media+=nota;
	}
	printf("A média das notas é: %.1f\n", media/alunos);
	if (acima_de_5 > 0){
		printf("%d aluno(s) tiraram nota acima de 5.0\n",acima_de_5);
	}else{
		printf("Não há nenhum aluno com nota acima de 5.0\n");
	}
}
