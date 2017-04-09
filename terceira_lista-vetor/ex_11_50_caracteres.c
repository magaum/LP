#include <stdio.h>
#include <locale.h>
/*

	Fazer um programa em C que leia uma frase de até 50 caracteres (utilizar o
comando gets) e imprima a frase sem os espaços em branco. Imprimir também a
quantidade de espaços em branco da frase.

*/

int main(){

	char vetor[50];
	int i, espaco=0,tamanho;

	printf("Digite uma frase com 50 caracteres: ");
	gets(vetor);
	tamanho=strlen(vetor);
	printf("\nA frase digitada foi: %s",vetor);
	printf("\n\nA frase sem espaços é: ");
	for (i=0;i<tamanho;i++){
		if (vetor[i] == ' '){
			espaco++;
			continue;
		}
		printf("%c",vetor[i]);
	}printf("\n\nA frase tem %d espaços\n\n",espaco);

}
