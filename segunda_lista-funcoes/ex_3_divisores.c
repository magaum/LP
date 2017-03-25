#include <stdio.h>

/*Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o
número de divisores desse valor.
*/

int divisores (int saida);

int main(){

	int num = 0;

	scanf("%d", &num);

	divisores(num);
}

int divisores (int saida){

	int i;

	for (i = 2; i <= saida; i++){
		if (saida % i == 0)
			printf("%d é divisivel por %d\n", saida, i);
	}
	return 0;
}
