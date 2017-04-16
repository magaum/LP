#include <stdio.h>
#include <locale.h>
#include <string.h>

/*

	Leia dois vetores de n posições. Verifique e escreva se um é anagrama de outro.
	Ex: ARARA e ARARA - são anagramas

*/

int main(){

	char palavra1[50],palavra2[50];
	int i,anagrama=-1,tamanho1,tamanho2,j=0,flag=1;
	
	printf("Digite uma palavra: ");
	scanf("%s",palavra1);
	(tamanho1 = strlen(palavra1)-1);
	printf("Digite outra palavra: ");
	scanf("%s",palavra2);
	(tamanho2 = strlen(palavra2)-1);
	if(tamanho1!=tamanho2){
		flag=0;
		printf("%s e %s não são um anagrama.\n",palavra1,palavra2);
	}
	else{
		for (i=tamanho1;i>=0;i--){
			if(palavra1[i]==palavra2[j]){
				anagrama++;
			}
			j++;
		}
	}
	if (anagrama == tamanho1){
		printf("%s e %s são um anagrama.\n",palavra1,palavra2);
	}else if(flag){
		printf("%s e %s não são um anagrama.\n",palavra1,palavra2);
	}
}
