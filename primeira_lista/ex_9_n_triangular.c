#include <stdio.h>

/* ###ENUNCIADO###

	Dizemos que um número natural é triangular se ele é produto de três
	números naturais consecutivos.
	Exemplo: 120 é triangular, pois 4.5.6 = 120.
	Dado um inteiro não-negativo n, verificar se n é triangular. 

*/

int main() {

	int n = 0,a = 0,b = 1,c = 2;

	scanf("%d", &n);
	
	while (a*b*c < n){
		a++;
		b++;
		c++;
	}
	if (a*b*c == n){
		printf("%d é triangular de %d.%d.%d\n", n,a,b,c);
	}else{
		printf("%d não é triangular\n",n);
	}
	return 0;
}
