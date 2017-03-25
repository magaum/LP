#include <stdio.h>

/*###ENUNCIADO

	Dados três números, imprimi-los em ordem crescente. 

*/

int main(){

	int n1 = 0, n3 = 0, n2 = 0, crescente = 0, i = 0;

	printf("N1: ");
	scanf("%d", &n1);
	printf("N2: ");
	scanf("%d", &n2);
	if (n1 > n2){
		i = 1;
		//se i = 1 então n2,n1 se não n1,n2
	}
	printf("N3: ");
	scanf("%d", &n3);
	if (n3 < n2 && i == 1){
		printf("%d %d %d\n", n3, n2,n1);
	} else if (n3 > n2 && i == 1){
		printf("%d %d %d\n", n2,n1,n3);
	} else if (n3 < n1){
		printf("%d %d %d\n", n3,n1,n2);
	}else if (n3 < n2 && i == 0){
		printf("%d %d %d\n", n1,n3,n2);
	} else{
		printf("%d %d %d\n", n1,n2,n3);
	}
	

	return 0;
}
