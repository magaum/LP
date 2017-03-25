#include <stdio.h>

/* ###ENUNCIADO###

	Dados um inteiro x e um inteiro não-negativo n, calcular x ** n

*/

int main(){

	int x, n, repeticoes, potencia;

	printf("base: ");
	scanf("%d", &x);
	printf("expoente: "); 
	scanf("%d", &n);
	potencia = x;
	if (n == 0){
		potencia = 1;
	}
	if (x == 0){
		potencia = 0;
	}else{
		for (repeticoes = 1; repeticoes < n; repeticoes ++){
			potencia *= x;
		}
	}
	printf("%d\n", potencia);
	return 0;
}
