#include <stdio.h>

int main(){
   int matriz[100][100];
   int m,n,x,y,k=0,lin=0,col=0,maior=0;

   scanf("%d %d",&m,&n);

   for (y=0;y<m;y++){
      for(x=0;x<n;x++){
         scanf("%d",&matriz[y][x]);
      }
   }

      while(k!=y){
      for (y=0;y<m;y++){
         for(x=0;x<n;x++){
            if (k==x){
               col+=matriz[y][x];
            }
            if(k){
               continue;
            }
            lin+=matriz[y][x];
         }
         if(lin>maior&&!k){
            maior=lin;
         }
         lin=0;
      }
      k++;
      if(col>maior){
         maior=col;
      }
      col=0;
    }
   printf("Matriz digitada: \n");
   for(y=0;y<m;y++){
      for(x=0;x<n;x++){
         printf("%d ",matriz[y][x]);
      }printf("\n");
   }
   printf("%d\n",maior);
}
