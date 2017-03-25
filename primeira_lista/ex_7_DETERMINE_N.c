#include <stdio.h>

/*###ENUNCIADO###

  Dado um inteiro não-negativo n, determinar n!

*/

int main(){
	
	int n,i,fatorial,flag = 0;
	
	scanf("%d", &n);

	if (n==0){
		fatorial = 0;
	}else{
		if (n < 0){
			n *= -1;
			flag = 1;
		}
		fatorial = n;
		for (i=1; i<n;i++){
			fatorial *= i;
		}
	}
	if (flag == 1){
		fatorial *= -1;
	}
		
	printf("%d\n",fatorial);
	
	return 0;
}
