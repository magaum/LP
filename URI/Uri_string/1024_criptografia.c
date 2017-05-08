#include <stdio.h>
#include <string.h>

int main(){

	int N,i,j,k,inverte,flag=0;
	char palavra[1001];

	scanf("%d",&N);
	getchar();
	for (i=0;i<N;i++){
		gets(palavra);
		inverte=strlen(palavra);
		for (j=0,inverte;j<inverte;j++,inverte--){
			k=palavra[j];
			if (palavra[j]>=65 && palavra[j]<=90 || palavra[j]>=97 && palavra[j]<=122){
					k+=3;
			}
			palavra[j]=k;
		}
		inverte=(strlen(palavra)/2);
		if (strlen(palavra)%2!=0){
			inverte++;
		}

		for (j=0;j<inverte;j++){
			k=palavra[j];
			k--;
			palavra[j]=k;
		}

		for (j=strlen(palavra)-1;j>=0;j--){
			printf("%c",palavra[j]);
		}printf("\n");
	}
}
