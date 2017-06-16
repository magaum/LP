#include <stdio.h>

int main(){
  
  FILE *in;
  
  int c,palavras=0,flag_espaco=0,flag_caracter=0,verifica_caracter=0,soma_palavra=0;
  char * nome;
  printf("Digite o nome do arquivo: ");
  scanf("%s",nome);
  if (nome!=NULL){
    in = fopen(nome,"r");
    while((c=getc(in))!=EOF){
      soma_palavra=0;
      if(c!=' '){
        flag_caracter++;
      }
      if(c==' '&&flag_caracter){
        flag_espaco=1;
        palavras++;
        soma_palavra=1;
      }
      if(flag_espaco&&c!=' '){
        verifica_caracter++;
      }
    }
    if (flag_caracter&&flag_espaco&&verifica_caracter&&soma_palavra){
      palavras--;
    }
    if(flag_caracter&&flag_espaco&&verifica_caracter){
      palavras++;
    }else if(flag_caracter&&!flag_espaco){
      palavras++;
    }
    printf("O arquivo tem %d palavras\n",palavras);
    fclose(in);
  }else{
    printf("Arquivo nao existe\n");
  }
  
  return 0;
}