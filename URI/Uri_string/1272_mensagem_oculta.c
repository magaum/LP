#include <stdio.h>
#include <string.h>

void limparBuffer();

int main(){
  
  int N,i,j,tam,flag=0,primeira_posicao,k=0;
  char palavra[100];
  
  scanf("%d",&N);
  limparBuffer();
  for(i=0;i<N;i++){
    primeira_posicao=1;
    k=0;
    fgets(palavra,100,stdin);
    tam=strlen(palavra);
    do{
	tam--;
    }while(palavra[tam]==' ');
    for (j=0;j<tam;j++){
      if (palavra[j]==' '){
	      continue;
      }
      if (primeira_posicao&&palavra[0]!=' '){
         printf("%c",palavra[j]);
	 primeira_posicao=0;
      } 
      if(palavra[j]!=' '){
        flag=1;
      }
      if(flag&&palavra[j-1]==' '){
          printf("%c",palavra[j]);
      }
    }
    printf("\n");
  }
}

void limparBuffer(void){
		char c;
			while((c=getchar()) != '\n' && c != EOF);
}
