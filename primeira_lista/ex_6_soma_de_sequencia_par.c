#include <stdio.h>

/* ###ENUNCIADO###

	Dados n e uma sequencia de n números inteiros, determinar a soma dos números pares. 
*/

int main(){

	int n, soma, repeticao, acumulador;

	scanf("%d", &n);

	for (repeticao = 0; repeticao < n; repeticao ++){
		scanf("%d", &soma);
		if (soma % 2 == 0){
			acumulador += soma;
		}
	}
	
	printf("%d\n", acumulador);
	
	return 0;
}
