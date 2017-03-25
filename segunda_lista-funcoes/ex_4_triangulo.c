#include <stdio.h>
#include <locale.h>

/*
	Escreva uma função que recebes 3 valores reais X, Y e Z e que verifique se esses
	valores podem ser os comprimentos dos lados de um triângulo e, neste caso,
	retornar qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é
	necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado
	de um triângulo é menor do que a soma do comprimento dos outros dois lados. O
	procedimento deve identificar o tipo de triângulo formado observando as seguintes
	definições:

	Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
	Triângulo Isósceles: os comprimentos de 2 lados são iguais.
	Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
*/

int equilatero(int X, int Y, int Z);

int isosceles(int X, int Y, int Z);

int main(){

	int X = 0,Y = 0,Z = 0,A = 0;
	do{
		printf("digite 3 numeros maiores que 0\n");
		scanf("%d %d %d", &X, &Y, &Z);
		if (X < 1 || Z < 1|| Y < 1){
			A = 1;
		}
	}while (A == 1);

	equilatero(X,Y,Z);

}

int equilatero(int X, int Y, int Z){
	if (X == Y && X == Z){
		printf("Triângulo Equilátero\n");
	} else{
		isosceles(X, Y, Z);
	}
}

int isosceles(int X, int Y, int Z){
	if (X == Y || X == Z){
		printf("Triângulo Isósceles\n");
	} else {
		printf("Triângulo Escaleno\n");
	}
}
