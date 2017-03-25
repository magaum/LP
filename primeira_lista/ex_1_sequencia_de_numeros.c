#include <stdio.h>

/*  Dada uma seqüência de números inteiros não-nulos, seguida por 0,
imprimir seus quadrados.*/

int main(){

	int numero = 1;
	
	while (numero != 0){
		do{
			printf("digite um número maior que 1 ou 0 para sair: ");
			scanf("%d", &numero);
		} while (numero < 0);
		printf("%d\n", numero *= numero);
	}

  return 0;

}

