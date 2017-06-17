#include <stdio.h>

int main(){
// FILE é uma struct da biblioteca stdio 
  FILE *in;
  
  int c,palavras=0,flag_espaco=0,flag_caracter=0,verifica_caracter=0,soma_palavra=0;
/*
   Como o tamanho do arquivo pode variar foi feito um ponteiro que só aponta para o primeiro endereço do nome do arquivo, 
     e acaba com \0 como toda string
*/
  char * nome;
  printf("Digite o nome do arquivo: ");
  scanf("%s",nome);
  if (nome!=NULL){
/*
   in é o ponteiro com os atributos da struct FILE que está recebendo o valor de fopen( file open ) que possui dois tributos:
     (1,2)
     1 - qual arquivo será aberto
     2 - atributo de abetura:
         2.1 - "r" = read
         2.2 - "w" = write
         2.3 - "a" = append 
         2.4 - "r+" = abre aquivo com atributo r/w
         2.5 - "w+" = cria e abre arquivo com atributo r/w
         2.6 - "t" = texto
         2.7 - "b" = binário
*/
    in = fopen(nome,"r");
/* 
   O comando padrão getc ( get caracter) captura o conteúdo do arquivo caracter por caracter e atribui a variável c 
   (C é um int pois um caracter cabe em um int)
   este loop durará até a flag EOF (End of file) 
 */
    while((c=getc(in))!=EOF){
// flag (desligada por padrão) que verifica se existe algum espaço neste loop
      soma_palavra=0;
      if(c!=' '){
// liga flag se algum caracter é diferente de espaço
        flag_caracter++;
      }
/*
   Quando o caracter atribuido a c pelo getc for um espaço e existir algum caracter anteriormente (flag caracter ligada)
   o contador de palavras será incrementado e a variável que verifica se existe algum espaço neste loop é alterada (ligada)
*/
      if(c==' '&&flag_caracter){
        flag_espaco=1;
        palavras++;
        soma_palavra=1;
      }
//flag de controle para o caso de existir alguma palavra após o espaço
      if(flag_espaco&&c!=' '){
        verifica_caracter++;
      }
    }
/* 
   Verifica se todas as flags estão ligadas, isto é:
   Se o arquivo tem caracter
   Se o arquivo tem espaços
   Se existe caracteres após o espaço
   Se foi adicionado um espaço por último antes da saída do loop
*/
    if (flag_caracter&&flag_espaco&&verifica_caracter&&soma_palavra){
      palavras--;
    }

    if(flag_caracter&&flag_espaco&&verifica_caracter){
      palavras++;
    }
// Verifica se existe caracteres e não existem espaços
    else if(flag_caracter&&!flag_espaco){
      palavras++;
    }
    printf("O arquivo tem %d palavras\n",palavras);
// Fecha o arquivo aberto 
    fclose(in);
  }else{
    printf("Arquivo nao existe\n");
  }
  
  return 0;
}
