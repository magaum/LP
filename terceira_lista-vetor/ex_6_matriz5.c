#include <stdio.h>

/*
	Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.

*/


int main(){
	int x,y,verdade=0, vetor[5][5];
	printf("\n");
	for (x=0;x<5;x++){
		printf("linha %d: ",x);
		for(y=0;y<5;y++){
			vetor[x][y]=0;
			if (x==verdade && y == verdade){
				vetor[x][y]=1;
			}
			printf("%d ",vetor[x][y]);
		}
		verdade++;
		printf("\n\n");
	}
}
