#include <stdio.h>

/*

Dadas duas seqüências com n números inteiros entre 0 e 9, interpretadas como dois
números inteiros de n algarismos, calcular a seqüência de números que representa a
soma dos dois inteiros.
Exemplo: n = 8
1a seqüência
2a seqüência
	  8 2 4 3 4 2 5 1
	+ 3 3 7 5 2 3 3 7
	1 1 6 1 8 6 5 8 8
*/

int main(){

	int soma,vetor[50],vetor1[50],i,j,n,flag=0,resto,vetor_soma[200];

	printf("8 2 4 3 4 2 5 1\n+ 3 3 7 5 2 3 3 7\n1 1 6 1 8 6 5 8 8\n");

	printf("Digite a quantidade de elementos que os vetores terão: ",n);
	scanf("%d",&n);
	for (i=0;i<n;i++){
		vetor[i]=0;
		printf("Digite o %d° valor do 1° vetor: ",i+1);
		scanf("%d",&vetor[i]);
	}
	printf("\n");
	for (i=0;i<n;i++){
		vetor1[i]=0;
		printf("Digite o %d° valor do 2° vetor: ",i+1);
		scanf("%d",&vetor1[i]);
	}
	i--;
	for(i,j=0;i>=0;i--,j++){
		soma = vetor[i]+vetor1[i];
		if (flag){
			soma+=resto;
			flag=0;
		}
		if (soma>9){
			flag=1;
			resto=soma/10;
			soma%=10;
		}
		vetor_soma[j]=soma;
	}
	if(flag){
		vetor_soma[j]=resto;
	}
	printf("  ");
	for (i=0;i<n;i++){
		printf("%d ", vetor[i]);
	}
	printf("\n+ ");
	for(i=0;i<n;i++){
		printf("%d ", vetor1[i]);
	}
	printf("\n");
	for (j;j>=0;j--){
		printf("%d ",vetor_soma[j]);
	}
	printf("\n");
}
