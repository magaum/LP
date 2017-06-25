#include <stdio.h>

int main(int argv, char * argc[]){

   char c;

   FILE *in, *out;

   if(argv>2){
      in = fopen(argc[1],"r");
      out = fopen(argc[2],"w");
      while((c=getc(in))!=EOF){
         if(c==' ')
            continue;
         putc(c,out);
      }
      fclose(in);
      fclose(out);
      return 0;
   }else{
      printf("Utilizacao comprime <nome do arquivo>\n");
      return -1;
   }
}
