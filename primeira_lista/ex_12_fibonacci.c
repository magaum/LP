#include <stdio.h>

/*###ENUNCIADO####

	Um matemático italiano da idade média conseguiu modelar o ritmo de
	crescimento da população de coelhos através de uma seqüência de números
	naturais que passou a ser conhecida como sequencia de Fibonacci. O n-ésimo
	número da seqüência de Fibonacci Fn é dado pela seguinte fórmula de
	recorrência:
	Faça um programa que, dado n, calcula Fn. 
*/

int main(){

	int i=1,n=0,a=0,b=1,c=0;

	scanf("%d", &n);
	for (i; i <= n; i++){
		c = a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	printf("\n");
	return 0;
}
