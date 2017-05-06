#include <stdio.h>
#include <string.h>

void limparBuffer(void);

int main(){

	int N,i,j,k,inverte,flag=0;
	char palavra[1000];

	scanf("%d",&N);
	limparBuffer();
	for (i=0;i<N;i++){
		gets(palavra);
		//fgets(palavra,1000,stdin);
		//scanf("%s",palavra);
		inverte=(strlen(palavra)/2);
		for (j=0,inverte=strlen(palavra);j<strlen(palavra);j++,inverte--){
			k=palavra[j];
			if (j<inverte){
				if (k>=65&&k<=90||k>=97&&k<=122){
					k+=2;
				}else{
					k+=-1;
				}
			}else if (palavra[j]>=65 && palavra[j]<=90 || palavra[j]>=97 && palavra[j]<=122){
					k+=3;
			}
			palavra[j]=k;
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
