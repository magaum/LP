#include <stdio.h>

/*
	Escreva uma função recursiva que recebe, por parâmetro, dois valores X e Z e
calcula e retorna X z . (sem utilizar funções prontas).
*/

int potencia(int x, int z);

int main(){

	int x, z;
	
	printf("base: ");
	scanf("%d", &x);
	printf("expoente: ");
	scanf("%d", &z);
	
	printf("%d\n", potencia(x, z));
}

int potencia(int x, int z){
	
	int i = 1, output = x; 
	
	for(i; i < z; i++){
		output *= x;
	}
	return output;
}
