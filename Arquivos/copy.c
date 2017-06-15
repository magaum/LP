#include <stdio.h>

int main(int argc, char * argv[]){
  
  FILE *in, *out;
  
  int c;
  
  if (argc>=3){
    in =fopen(argv[1],"r");
    out = fopen(argv[2],"w");
    if((in!=NULL)&&(out!=NULL)){
      while((c=getc(in))!=EOF){
        putc(c,out);
      }
    }else{
    printf("Erro ao abrir arquivo\n");
  }
    fclose(in);
    fclose(out);
  }else{
    printf("Utilizacao copy <origem> <destino>\n");
  }
  
  return 0;
}