#include <stdio.h>
#include <stdlib.h>

/*

	Leia um vetor de 50 posições e o compacte, ou seja, elimine as posições com valor
zero avançando uma posição, posiçã o, com os com os valores subsequentes do vetor.
Dessa forma todos “zeros” devem ficar para as posições finais do vetor.

para a função rand() gerar números aleatórios é necessário colocar esta linha "srand( (unsigned)time(NULL) );"

*/

int main(){

	int vetor[50],i,numero,vetor_compactado[50],k=0,zero=0;

	printf("Vetor na ordem:		");
	for (i=0;i<50;i++){
		vetor[i]=0;
		numero=(rand()%10);
		vetor[i]=numero;
			printf("%d ", vetor[i], i);
	}
	printf("\nVetor compactado:	");
	for (i=0;i<50;i++){
		vetor_compactado[i]=0;
		if (vetor[k]==0){
			k++;
			zero++;
		}
		vetor_compactado[i]=vetor[k];
		k++;
	}
	for (i=51-zero;i<50;i++){
		vetor_compactado[i]=0;
	}
	
	for (i=0;i<50;i++){
		printf("%d ",vetor_compactado[i]);
	}

	printf("\n");
}
