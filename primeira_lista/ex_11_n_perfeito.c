#include <stdio.h>

/*###ENUNCIADO###
	Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus
	divisores positivos diferentes de n.
	Exemplo: 6 é perfeito, pois 1+2+3 = 6
	Dado um inteiro positivo n, verificar se n é perfeito. 
*/

int main(){

	int n = 0, soma = 0,i = 1;

	scanf("%d", &n);

	for (i; i < n; i++){
		if (n % i == 0){
			soma += i;
		}
	}
	if (soma == n){
		printf("%d é perfeito\n", n);
	}else {printf("%d não é perfeito\n", n);}
	return 0;
}
