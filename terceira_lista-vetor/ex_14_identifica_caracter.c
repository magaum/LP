#include <stdio.h>
#include <locale.h>
#include<string.h>
/*

	Escreva um programa que dado um caractere, informe se ele é uma letra maiúscula,
uma letra minúscula, um número ou um símbolo. DICA: Utilize os códigos da tabela de caracteres.

*/

int main(){

	char caracter;

	printf("Digite um caracter: ");
	scanf("%c",&caracter);

	if (caracter >= '0' && caracter <= '9'){
		printf("%c é um número\n",caracter);
	}
	else if (caracter>='A'&&caracter<='Z'){
		printf("%c é uma letra maiuscula\n",caracter);
	}
	else if(caracter>= 'a' && caracter <= 'z'){
		printf("%c é uma letra minúscula\n",caracter);
	}
	else{
		printf("%c é um símbolo\n",caracter);
	}
	
}
