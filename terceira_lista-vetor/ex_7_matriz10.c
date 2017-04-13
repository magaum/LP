#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor.

int main(){
	
	printf("\nVetores começam com os indicadores em 0\nPara que seja mais fácil de encontrar o número maior foi acrescentado 1 a posição\n");
	printf("\nCOLUNA:\t\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");

	int i,j,x[10][10],maior=0,linha,coluna,k=0;
	srand( (unsigned)time(NULL) );
// srand( (unsigned)time(NULL) );  gera a cada vez que o programa é executado numeros aleatórios baseando-se no relógio
	printf("\n");
	for (i=0;i<10;i++){
		printf("LINHA %d:\t", i+1);
		for (j=0;j<10;j++){
			x[i][j]=0;
			x[i][j]=rand()%100;
			printf("%d\t",x[i][j]);
			if(x[i][j]>maior){
				maior=x[i][j];
				linha=i+1;
				coluna=j+1;
			}
		}
	printf("\n\n");
	}
	printf("O maior número é: %d\nEstá na linha %d, coluna %d\n\n", maior, linha,coluna);
}
