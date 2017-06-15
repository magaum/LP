#include <stdio.h>

int main(){
  
  FILE *in;
  
  int c,palavras=0,flag_espaco=1,flag_caracter=0;
  char * nome;
  printf("Digite o nome do arquivo: ");
  scanf("%s",nome);
  if (nome!=NULL){
    in = fopen(nome,"r");
    while((c=getc(in))!=EOF){
      if(c==' '){
        flag_espaco=0;
        palavras++;
    }
    if(flag_espaco){
      palavras=0;
    }
    printf("O arquivo tem %d palavras\n",palavras);
    fclose(in);
  }else{
    printf("Arquivo nao existe\n");
  }
  
  return 0;
}