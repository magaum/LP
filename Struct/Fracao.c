#include <stdio.h>

struct fracao{
  int den;
  int num;  
};

void exibefracao(struct fracao fracaoA);
struct fracao somafracao(struct fracao fracaoA, struct fracao fracaoB);
struct fracao multiplica(struct fracao fracaoA, struct fracao fracaoB);
struct fracao subtrai(struct fracao fracaoA, struct fracao fracaoB);
struct fracao simplifica(struct fracao fracaoA);

int main(){
  struct fracao x,y,soma,subtracao,multiplicacao;
  printf("Digite a fracao 1: \nNumerador: ");
  scanf("%d",&x.num);
  printf("Denominador: ");
  scanf("%d",&x.den);
  printf("Digite a fracao 2: \nNumerador: ");
  scanf("%d",&y.num);
  printf("Denominador: ");
  scanf("%d",&y.den);
  
  exibefracao(x);
  soma=somafracao(x,y);
  printf("Soma das fracoes: %d / %d\n",soma.num,soma.den);
  multiplicacao=multiplica(x,y);
  printf("Multiplicacao das fracoes: %d / %d\n",multiplicacao.num,multiplicacao.den);
  subtracao=subtrai(x,y);
  printf("Subtracao das fracoes: %d / %d\n",subtracao.num,subtracao.den);
  return 0;
}

void exibefracao(struct fracao fracaoA){
  printf("Fracao A: %d/%d\n",fracaoA.num,fracaoA.den);
}

struct fracao somafracao(struct fracao fracaoA, struct fracao fracaoB){
  struct fracao soma;
  soma.num = (fracaoA.num*fracaoB.den)+(fracaoB.num*fracaoA.den);
  soma.den = fracaoA.den*fracaoB.den;
  soma=simplifica(soma);
  return soma;
}

struct fracao multiplica(struct fracao fracaoA, struct fracao fracaoB){
 struct fracao multiplicacao;
 multiplicacao.num=fracaoA.num*fracaoB.num;
 multiplicacao.den=fracaoA.den*fracaoB.den;
 multiplicacao=simplifica(multiplicacao);
 return multiplicacao;
}
struct fracao subtrai(struct fracao fracaoA, struct fracao fracaoB){
  struct fracao subtracao;
  subtracao.num=(fracaoA.num*fracaoB.den)-(fracaoB.num*fracaoA.den);
  subtracao.den=fracaoA.den*fracaoB.den;
  subtracao=simplifica(subtracao);
  return subtracao;
}

struct fracao simplifica(struct fracao x){
   while(x.num%7==0&&x.den%7==0){
      x.num/=7;
      x.den/=7;
   }
   while(x.num%5==0&&x.den%5==0){
      x.num/=5;
      x.den/=5;
   }
   while(x.num%3==0&&x.den%3==0){
      x.num/=3;
      x.den/=3;
   }
   while(x.num%2==0&&x.den%2==0){
      x.num/=2;
      x.den/=2;
   }
   return x;
}
