#include <stdio.h>

struct fracao{
  int den;
  int num;  
};

void exibefracao(struct fracao fracaoA);
struct fracao somafracao(fracaoA, fracaoB);/*
struct fracao multiplica(fracaoA, fracaoB);
struct fracao subtrai(fracaoA, fracaoB);*/

int main(){
  struct fracao x;
  struct fracao y;
  printf("Digite a fracao 1: \nNumerador: ");
  scanf("%d",&x.num);
  printf("Denominador: ");
  scanf("%d",&x.den);
  printf("Digite a fracao 2: \nNumerador: ");
  scanf("%d",&y.num);
  printf("Denominador: ");
  scanf("%d",&y.den);
  
  exibefracao(x);
  x=somafracao(x,y);
  printf("%d / %d",x.num,x.den);
}

void exibefracao(struct fracao fracaoA){
  printf("%d/%d\n",fracaoA.num,fracaoA.den);
}
struct fracao somafracao(struct fracao fracaoA, struct fracao fracaoB){
  struct fracao soma;
  soma.num = (fracaoA.num*fracaoB.den)+()fracaoB.num*fracaoA.den;
  soma.den = fracaoA.den*fracaoB.den;
  return soma;
}
/*
struct fracao multiplica(fracaoA, fracaoB){
  
}
struct fracao subtrai(fracaoA, fracaoB){
  
}*/
