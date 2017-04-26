#include <stdio.h>

/*

  ENUNCIADO

  Leia um vetor de 8 posições e troque os 4 primeiros valores pelos 4 últimos e vice e
versa. Escreva ao final o vetor obtido.

*/

int main(){
  
  int vetor[8], i=0, numero, primeira_pt;
  
  scanf("%d", &numero);
  
  primeira_pt=numero%10000;
  numero /= 10000;
  
  for (i; i<4;i++){
    vetor[i]=0;
    vetor[i]=primeira_pt;
  }
  for (i;i<8;i++){
    vetor[i]=0;
    vetor[i]=numero;
  }
  for(i=0;i<8;i++){
    printf("%d\n", vetor[i]);
  }
}