#include <stdio.h>

/*###ENUNCIADO###

	Dado um inteiro positivo p, verificar se p é primo. 
*/

int main(){

	int p;

	do {	
		printf("digite um número maior que 0: ");
		scanf("%d", &p);
	}while(p<1);

	if ( p== 2 || p== 3 || p == 5 || p == 7){
		printf("primo\n");
	}else if (p%2==0 || p%3 == 0 || p%5==0 || p%7==0){
		printf("não é primo\n");
	}else{
		printf("primo\n");
	}

	return 0;
}
