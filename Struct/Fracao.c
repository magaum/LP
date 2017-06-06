#include <stdio.h>

struct fracao{
  int den;
  int num;  
};

/*void exibefracao(fracaoA);
struct fracao somafracao(fracaoA, fracaoB);
struct fracao multiplica(fracaoA, fracaoB);
struct fracao subtrai(fracaoA, fracaoB);*/

int main(){
  struct fracao x;
  printf("Digite a fracao: \nNumerador:     \t");
  scanf("%d",&x.num);
  printf("\t\t---\n");
  printf("Denominador:  \t");
  scanf("%d",&x.den);
  
  x=exibefracao(x);
  printf("%d\n---%d",)
}
/*
void exibefracao(fracaoA){
  
}
struct fracao somafracao(fracaoA, fracaoB){
  
}
struct fracao multiplica(fracaoA, fracaoB){
  
}
struct fracao subtrai(fracaoA, fracaoB){
  
}*/