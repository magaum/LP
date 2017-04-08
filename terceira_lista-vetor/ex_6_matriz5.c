#include <stdio.h>

/*
	Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.

*/


int main(){
	int i,j,verdade=0;
	printf("\n");
	for (i=0;i<5;i++){
		printf("linha %d: ",i);
		for(j=0;j<5;j++){
			if (i==verdade && j == verdade){
				printf("1 ");
				continue;
			}
			printf("0 ");
		}
		verdade++;
		printf("\n\n");
	}
}
