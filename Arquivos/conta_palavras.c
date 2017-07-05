#include <stdio.h>

int main(int argv,char * argc []){
  
  FILE *in;
  
  int c,flag=0,palavra=0;
  
  if(argv>1){
    in=fopen(argc[1],"r");
    while((c=getc(in))!=EOF){
      if ((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
        if(flag)
          continue;
        palavra++;
        flag=1;
      }
      if (c==' '||c=='\n'){
        flag=0;
      }
    }
    printf("%d\n",palavra);
    fclose(in);
  }
  
}
