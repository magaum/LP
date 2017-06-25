#include <stdio.h>
#define MAX 100
int main(){

   int matriz[MAX][MAX];
   int m,k,x,y,produtoPrincipal=1, oOutroEsqueci=1;

   scanf("%d",&m);
   k=m-1;
   for (y=0;y<m;y++){
      for(x=0;x<m;x++){
         scanf("%d",&matriz[y][x]);
      }
   }
   for(y=0;y<m;y++){
      for(x=0;x<m;x++){
         if(y==x){
            produtoPrincipal*=matriz[y][x];
         }
         if (x==k){
            oOutroEsqueci*=matriz[y][x];
         }
      }k--;
   }
   for(y=0;y<m;y++){
      for(x=0;x<m;x++){
         printf("%d ",matriz[y][x]);
      }printf("\n");
   }
   printf("Produto Principal: %d\nO outro produto que nao lembro o nome: %d\n",produtoPrincipal,oOutroEsqueci);

   return 0;
}
