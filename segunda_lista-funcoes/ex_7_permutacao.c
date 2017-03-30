#include <stdio.h>

/*
	
	Um número é dito permutação de um número b se os dígitos de a formam uma permutação dos dígitos de b.
	Exemplo: 5412434 é uma permutação de 4321445, mas não é uma permutação de 4312455.
	Obs.: Considere que o dígito 0 (zero) não aparece nos números.
	(a) Faça uma função contadígitos que, dados um inteiro n e um inteiro d, 0<d<9,
	devolve quantas vezes o dígito d aparece em n.
	(b) Usando a função do item anterior, faça um programa que lê dois inteiros
	positivos a e b e responda se a é permutação de b.
	UM NÚMERO A É DITO PERMUTAÇÃO DE UM NÚMERO B 
	SE OS DÍGITOS DE A FORMAM UMA PERMUTAÇÃO DOS DÍGITOS DE B.
	EXEMPLO: 5412434 É UMA PERMUTAÇÃO DE 4321445 (4+3+2+1+4+4+5)/(5+4+1+2+4+3+4)=1, MAS NÃO É UMA PERMUTAÇÃO DE 4312455 (4+3+1+2+4+5+5)=24.
*/
int i = 0;

int permutacao(int a, int b);

int contadigitos(int n, int d);

int main(){
	int d = 0, n = 0;
	
	printf("digite o valor de D: ");
	do{
		scanf("%d", &d);
	}while (d<0);
	
	printf("digite o valor de N: ");
	scanf("%d", &n);
	printf("%n aparece %d vezes em %d", d, contadigitos(n,d), n);
	
}

int contadigitos (int n, int d){
	int array[10],letra,j;
	for (i; i<10;i++){
		array[i]=0;
		for (j=0; j < 10; j++){
			letra = getchar();
			++ array[letra - '0'];
		}
	}

	return array[10];

}
