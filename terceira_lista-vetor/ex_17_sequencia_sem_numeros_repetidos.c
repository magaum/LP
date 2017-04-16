#include <stdio.h>

/*

Dados dois números naturais m e n e duas seqüências ordenadas com m e n
números inteiros, obter uma única seqüência ordenada contendo todos os elementos
das seqüências originais sem repetição.

*/

int main(){

	int m,n,i,j,k=0,l,lista_m[50],lista_n[50],elementos[50],verdade=0;

	printf("Digite a quantidade de numeros que a primeira sequencia 'M', irá receber: ");
	scanf("%d",&m);
	printf("\n");
	printf("Digite a quantidade de numeros que a segunda sequencia 'N', irá receber: ");
	scanf("%d", &n);
	for (i=0;i<m;i++){
		lista_m[i]=0;
		printf("Digite o %d° valor de M: ",i+1);
		scanf("%d",&lista_m[i]);
		
	}
	printf("\n");
	for (i=0;i<n;i++){
		lista_n[i]=0;
		printf("Digite o %d° valor de N: ",i+1);
		scanf("%d",&lista_n[i]);
	}
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			if (lista_m[i]==lista_n[j]){
				verdade=1;
			}
		}
		if(verdade==0){
			for (l=0;l<k;l++){
				if(elementos[l]==lista_m[i]){
					verdade=1;
				}
			}
			if(verdade==0){
				elementos[k]=lista_m[i];
				k++;
			}
		}
		verdade=0;
	}
	
	for (l=0;l<n-1;l++){
		for (i=1;i<n;i++){
			if (lista_n[l]==lista_n[i]){
				lista_n[i]='a';
			}
		}
		if(lista_n[l]>=-999999&&lista_n[l]<=9999999){
			k++;
			elementos[k]=lista_n[l];
		}
	}
	for(i=0;i<k;i++){
		for(j=0;j<k;j++){
			if(elementos[i]<elementos[j]){
				lista_n[n]=elementos[j];
				elementos[j]=elementos[i];
				elementos[i]=lista_n[n];
				n++;
			}
		}
	}
	for (i=0;i<k;i++){
		printf("%d ",elementos[i]);
	}
	printf("\n");
}
