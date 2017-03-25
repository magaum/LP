#include <stdio.h>

int primo (int m);
int main(){
	int m, saida;
	
	scanf("%d", &m);
	saida = primo(m);
	printf("%d\n", saida);
}
int primo(int m){
	if (m == 2 || m == 3 || m == 5 || m == 7){
		return 1;
	}
	else if (m % 2 == 0 || m % 3 == 0 || m % 5 == 0 || m % 7 == 0){
		return (0);
	}
	else {
		return (1);
	}
}
