#include <stdio.h>
#include <math.h>

typedef struct{
   int x;
   int y;
} ponto;

ponto somaPonto(ponto A, ponto B);
void exibePonto(ponto A);
float distanciaEntrePontos(ponto A, ponto B);

int main(){
   ponto a,b,out;
   float dist;
   printf("Ponto A:\n");
   scanf("%d",&a.x);
   scanf("%d",&a.y);
   printf("Ponto B:\n");
   scanf("%d",&b.x);
   scanf("%d",&b.y);

   exibePonto(a);
   exibePonto(b);
   out=somaPonto(a,b);
   exibePonto(out);
   dist=distanciaEntrePontos(a,b);
   printf("%f\n",dist);

   return 0;
}

void exibePonto(ponto A){
   printf("X: %d Y: %d\n",A.x,A.y);
}

ponto somaPonto(ponto A, ponto B){
   ponto out;

   out.x=A.x+B.x;
   out.y=A.y+B.y;

   return out;
}

float distanciaEntrePontos(ponto A, ponto B){
   float out,x,y;

   x=A.x-B.x;
   y=A.y-B.y;
   out=pow(x,2)+pow(y,2);
   out=sqrt(out);
   return out;
}
