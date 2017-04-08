#include <stdio.h>

/*

	Dado dois vetores, A (5 elementos) e B (8 elementos), faça um programa em C que
imprima todos os elementos comuns aos dois vetores.

*/

int main(){

	int vetor_a[5],vetor_b[8],numero=0,i,j,divide=10000,add;

	printf("Digite 5 valores para o primeiro vetor: ");
	scanf("%d",&numero);
	for (i=0;i<5;i++){
		vetor_a[i]=0;
		add=numero/divide;
		numero%=divide;
		vetor_a[i]=add;
		divide/=10;
	}
	numero=0;
	divide=10000000;
	printf("Digite 8 valores para o primeiro vetor: ");
	scanf("%d",&numero);
	for (i=0;i<8;i++){
		vetor_b[i]=0;
		add=numero/divide;
		numero%=divide;
		vetor_b[i]=add;
		divide/=10;
	}
	
	for (i=0;i<5;i++){
		for(j=0;j<8;j++){
			if(vetor_a[i]==vetor_b[j]){
				printf("%d está nos vetores A e B\nPosição do vetor A: %d\nPosição do vetor: B %d\n\n", vetor_a[i], i, j);
			}
		}
	}
}
