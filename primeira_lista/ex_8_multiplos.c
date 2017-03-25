#include <stdio.h>

/*###ENUNCIADO###
  Dados n e dois números inteiros positivos i e j diferentes de 0, imprimir em
  ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de
  ambos.
  Exemplo: Para n = 6 , i = 2 e j = 3 a saída deverá ser : 0,2,3,4,6,8. 
  
  Carlin salvou nesse o/
*/


int main(){

	int n = 0,i = 0,j =0, a = 0, final=0;

	printf("N: ");
	scanf("%d", &n);
	printf("i: ");
	scanf("%d", &i);
	printf("j: ");
	scanf("%d", &j);

	while (a<n){
		if (final%i==0 || final%j==0){
			printf("%d ",final);
			a++;
		}
		final ++;
	}
	printf("\n");

	return 0;
}
