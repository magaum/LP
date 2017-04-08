#include <stdio.h>
#include <locale.h>
/*

	Leia um vetor de 10 posições e em seguida um valor X qualquer. Seu programa
devera fazer uma busca do valor de X no vetor lido e informar a posição em que foi
encontrado ou se não foi encontrado.

*/

int main(){

	int numero, vetor[10], i,add,divide=1000000000,verifica_no_vetor;
	
	printf("Digite 10 valores para o vetor armazenar: " );
	scanf("%d",&numero);
	printf("Digite um valor para ser verificado: ");
	scanf("%d", &verifica_no_vetor);
	for (i=0;i<10;i++){
		vetor[i]=0;
		add=numero/divide;
		numero%=divide;
		vetor[i]=add;
		divide/=10;
	}
	
	printf("Vetor na ordem digitada:\n");
	for (i=0;i<10;i++){
		if (verifica_no_vetor == vetor[i]){
			printf("%d está na posição: %d\n", verifica_no_vetor, i);
		}else{
			printf("%d não está no vetor\n",verifica_no_vetor);
		}
	}
}
