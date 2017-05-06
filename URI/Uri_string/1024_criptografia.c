#include <stdio.h>
#include <string.h>

void limparBuffer(void);

int main(){

	int N,i,j,k,inverte;
	char palavra[1000];

	scanf("%d",&N);
	limparBuffer();
	for (i=0;i<N;i++){
		//gets(palavra);
		fgets(palavra,1000,stdin);
		//scanf("%s",palavra);
		inverte=strlen(palavra);
		printf("%d\n",inverte);
		for (j=0,inverte=strlen(palavra);j<strlen(palavra);j++,inverte--){
			if (palavra[j]>=65 && palavra[j]<=90 || palavra[j]>=97 && palavra[j]<=122){
				k=palavra[j];
				//printf("%d %d",j,inverte);
				/*if (j<(strlen(palavra)/2)){
					k+=2;
				}else{
					k+=3;
				}*/
				palavra[j]=k;
			}
		}
		for (j=strlen(palavra);j>=0;j--){
			printf("%c",palavra[j]);
		}printf("\n");
	}
}

void limparBuffer(void){
		char c;
			while((c=getchar()) != '\n' && c != EOF);
}
