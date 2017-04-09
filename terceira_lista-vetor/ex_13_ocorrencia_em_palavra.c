#include <stdio.h>
#include <locale.h>
#include <string.h>

/*

	Dados duas strings (um contendo uma frase e outro contendo uma palavra),
determine o número de vezes que a palavra ocorre na frase.
	Exemplo:
	Para a frase : ANA E MARIANA GOSTAM DE BANANA
	Temos que a palavra ANA ocorre 4 vezes na frase.

*/

int main(){

	char frase[50], palavra[50];
	int i,j=0,len_frase,len_palavra,x=1, aparece=0,ocorrencia=0;

	printf("Digite uma frase: ");
	scanf("%[^\n]s",frase);
	__fpurge(stdin);
	printf("Digite uma palavra para ser verificada na frase: ");
	scanf("%s",palavra);

	len_frase=strlen(frase);
	len_palavra=strlen(palavra);
	for (i=j;i<len_frase;i++){
		if (palavra[x-1]==frase[i]){
			aparece++;
		}
		if (x==len_palavra){
			if (aparece==len_palavra){
				ocorrencia++;
			}
			aparece=0;
			x=0;
			j++;
			i=j-1;
		}
		x++;
	}printf("\n'%s' aparece %d vezes em '%s'\n", palavra, ocorrencia,frase);
}
