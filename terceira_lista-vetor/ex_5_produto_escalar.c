#include <stdio.h>
#include <locale.h>

/*

	Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos. Faça
um programa em C que calcule o produto escalar P de A por B. (Isto é, P =
A[1]*B[1] + A[2]*B[2] + ... A[N]+B[N]).

*/


int main(){

	int numero, vetor_m[10],vetor_n[10], i,add,divide=1000000000,verifica_no_vetor,p=0,p1;
	
	printf("Digite 10 valores para armazenar no vetor m: " );
	scanf("%d",&numero);
	for (i=0;i<10;i++){
		vetor_m[i]=0;
		add=numero/divide;
		numero%=divide;
		vetor_m[i]=add;
		divide/=10;
	}
	numero=0;
	divide=1000000000;
	printf("Digite 10 valores para armazenas no vetor n: ");
	scanf("%d",&numero);
	for (i=0;i<10;i++){
		vetor_n[i]=0;
		add=numero/divide;
		numero%=divide;
		vetor_n[i]=add;
		divide/=10;
        }
	for (i=0;i<10;i++){
		p1=vetor_m[i]*vetor_n[i];
		p+=vetor_m[i]*vetor_n[i];
		printf("vetor_m %d * vetor_n %d = %d\nP = %d\n\n", vetor_m[i],vetor_n[i],p1,p);
	}
}
