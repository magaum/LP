#include <stdio.h>

int main(){

	double M[12][12],aux;
	int i,j,contador=10,flag=0;
	char escolha;

	scanf("%c",&escolha);

	for (i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%lf",&M[i][j]);
			//M[i][j]=rand();
			if(i==j&&i<5){
				flag=1;
			}
			else if (j<=contador&&flag){
				aux+=M[i][j];
			}
		}contador--;
		flag=0;
	}
	if (escolha=='S'){
		printf("%.1lf\n",aux);
	}
	else{
		printf("%.1lf\n",aux/30);
	}
	return 0;

}
