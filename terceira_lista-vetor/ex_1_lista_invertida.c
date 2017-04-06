#include <stdio.h>

/*
  ENUNCIADO
  
  Dada uma sequência de n números, imprimí-la na ordem inversa à da leitura.

*/

#define TAM 100
int main(){
  int i=0,k=0, numero,inverso, vetor[TAM];
  
  scanf("%d", & numero);
  
  while(numero > 0){
    vetor[i]=0;
    inverso=numero%10;
    numero /= 10;
    vetor[i]=inverso;
    printf("Indice %d = %d\n", i, inverso);
    i++;
    k=i;
  }
  for (i=0; i<k;i++){
    printf("%d\n",vetor[i]);
  }
}