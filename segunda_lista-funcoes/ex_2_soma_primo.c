#include <stdio.h>


int soma_primo(int m){
	
	int i = 1, primo = 0;
	
	for (i; i <= m;i++){
		if (i == 2 || i == 3 || i == 5 || i == 7){
			primo += i;
		}
		else if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0){
			continue;
		}
		else {
			primo += i;		
		}
	}
	return primo;
}
int main(){
	int n;
	do{
	printf("digite um número maior que 0: ");
	scanf("%d", &n);
	}while(n <= 0);
	printf("%d\n", soma_primo(n));
}
