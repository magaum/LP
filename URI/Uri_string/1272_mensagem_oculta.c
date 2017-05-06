#include <stdio.h>
#include <string.h>

void limparBuffer();

int main(){
  
  int N,i,j,k=0,tam,ascii,flag=0;
  char palavra[50],mensagem[50];
  
  scanf("%d",&N);
  limparBuffer();
  for(i=0;i<N;i++){
    fgets(palavra,50,stdin);
    tam=strlen(palavra);
    for (j=0;j<tam;j++){
      //ascii=palavra[j];
     /* if (palavra[0]!=' '){
         printf("%c",palavra[j]);
      }*/
      if(palavra[j]!=' '){
        flag=1;
      }
      if(flag&&palavra[j-1]==' '){//((ascii-'a')>=0&&ascii-'z')<=0)
          //mensagem[k];
          printf("%c",palavra[j]);
          //k++;
      }
    }
    /*for (j=0;j<k;j++){
      printf("%c",mensagem[j]);
    }*/
    printf("\n");
  }
}

void limparBuffer(void){
		char c;
			while((c=getchar()) != '\n' && c != EOF);
}
