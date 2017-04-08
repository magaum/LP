#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor.

int main(){
	
	printf("\nVetores começam com os indicadores em 0\nPara que seja mais fácil de encontrar o número maior foi acrescentado 1 a posição\n");
	printf("COLUNA:		1	2	3	4	5	6	7	8	9	10\n");

	int i,j,x=0,maior=0,linha,coluna;
	srand( (unsigned)time(NULL) );
// srand( (unsigned)time(NULL) );  gera a cada vez que o programa é executado numeros aleatórios baseando-se no relógio
	printf("\n");
	for (i=0;i<10;i++){
		printf("LINHA %d:	", i+1);
		for (j=0;j<10;j++){
			x=(rand()%100);
			printf("%d	",x);
			if(x>maior){
				maior=x;
				linha=i+1;
				coluna=j+1;
			}
		}
	printf("\n\n");
	}
	printf("O maior número é: %d\nEstá na linha %d, coluna %d\n\n", maior, linha,coluna);
}
