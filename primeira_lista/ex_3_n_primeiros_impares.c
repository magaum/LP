#include <stdio.h>

/* ###ENUNCIADO####

	Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
		Exemplo: Para n=4 a saída deverá ser 1,3,5,7. 
*/

int main() {

	int n, acumulador, repeticao;

	scanf("%d", &n);

	for (repeticao = 1; n != acumulador; repeticao ++){
		if (repeticao % 2 != 0){
			printf("%d\n", repeticao);
			acumulador ++;
		}
	}	

	return 0;

}
