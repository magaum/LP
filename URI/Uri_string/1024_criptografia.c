#include <stdio.h>
#include <string.h>

void limparBuffer(void);

int main(){

	int N,i,j,k,inverte;
	char palavra[1000],palavra_invertida[1000];

	scanf("%d",&N);
	limparBuffer();
	for (i=0;i<N;i++){
//		scanf("%s",palavra);
		fgets(palavra,1000,stdin);
/*		while (palavra[k]!='\0'){
			if (palavra[k]!=' ')
		}*/
		for (j=0,inverte=strlen(palavra);j<strlen(palavra);j++,inverte--){
			if (palavra[j]>=65 && palavra[j]<=90 || palavra[j]>=97 && palavra[j]<=122){
				k=palavra[j];
				k+=3;
				palavra[j]=k;
				printf("%d %d\n",inverte,j);
				palavra_invertida[inverte]=palavra[j];
			}
//			printf("%c",palavra[j]);
		}
		for (j=0;j<strlen(palavra);j++){
			printf("%c",palavra_invertida[j]);
		}printf("\n");
	}

}

void limparBuffer(void){
		char c;
			while((c=getchar()) != '\n' && c != EOF);
}
