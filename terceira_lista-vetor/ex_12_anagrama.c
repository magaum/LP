#include <stdio.h>
#include <locale.h>
/*

	Leia dois vetores de n posições. Verifique e escreva se um é anagrama de outro.
	Ex: ARARA e ARARA - são anagramas

*/

int main(){

	char palavra[50];
	int i,anagrama=-1,tamanho,j=0;
	
	printf("Digite uma palavra: ");
	scanf("%s",palavra);
	(tamanho=strlen(palavra)-1);
	
	for (i=tamanho;i>=0;i--){
		if(palavra[i]==palavra[j]){
			anagrama++;
		}
		j++;
	}
	if (anagrama == tamanho){
		printf("%s é um anagrama.\n",palavra);
	}else{
		printf("%s não é um anagrama.\n",palavra);
	}
}
