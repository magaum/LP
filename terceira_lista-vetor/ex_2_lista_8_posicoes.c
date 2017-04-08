#include <stdio.h>
#include <locale.h>
/*

	Leia um vetor de 8 posições e troque os 4 primeiros valores pelos 4 últimos e vice e
versa. Escreva ao final o vetor obtido.

*/

int main(){

	int numero, vetor[8], inverte[8], i,add,divide=10000000,troca=4;
	
	scanf("%d",&numero);

	for (i=0;i<8;i++){
		vetor[i]=0;
		add=numero/divide;
		numero%=divide;
		vetor[i]=add;
		divide/=10;
	}
	for(i=0;i<8;i++){
		inverte[i]=0;
		inverte[i]=vetor[troca];
		if (troca ==7){
			troca=-1;
		}
		troca++;
	}
	printf("Vetor na ordem digitada:\n");
	for (i=0;i<8;i++){
		printf("posição: %d %d\n", i,vetor[i]);
	}
	printf("\nVetor na posição invertida:\n");
	for (i=0;i<8;i++){
		printf("Posição: %d %d\n",i, inverte[i]);
	}
}
