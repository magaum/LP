#include <stdio.h>

/*
	Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e
	retorna o valor de S. Utilize para isso a chamada de uma outra função, esta
	recursiva, que calcule o fatorial de um número.
	S = 1 + 1/1! + 1⁄2! + 1/3! + 1/N!
*/

double s=0; //variavel global

double fatorial(double f);

double main (){
	double n;
	
	scanf ("%lf", &n);

	printf("S = %lf\n",fatorial(n));
}

double fatorial(double f){
	int j=1;
	double fat=f;
	if (f != 0){
		for (j;j<f;j++){
			fat*= j;
		}
		s+=1/fat;
		f--;
		fatorial(f);
	}else{
		return 1+s;
	}
}
