#include <stdio.h>
#define MAX 3

void retorna_maior(int A[MAX][MAX], int n, int *k, int *Lin, int *Col);

int main(){
  
  int x,y,A[MAX][MAX],maior=0,linha,coluna;
  
  for (y=0;y<MAX;y++){
    for(x=0;x<MAX;x++){
      scanf("%d",&A[y][x]);
    }
  }
  
  printf("Elem\tLinha\tColuna\n");
  
  x=MAX*MAX;
  
  while (x){
    retorna_maior(A,MAX,&maior,&linha,&coluna);
    printf("%d\t%d\t%d\n",maior,linha,coluna);
    A[linha][coluna]=-1;
    maior=0;
    x--;
  }

  return 0;
}

void retorna_maior(int A[MAX][MAX], int n, int *k, int *Lin, int *Col){
  int x,y;
  for (y=0;y<n;y++){
    for(x=0;x<n;x++){
      if(*k<A[y][x]){
        *k = A[y][x];
        //A[y][x]=-1;
        *Lin = y;
        *Col = x;
      }
    }
  }
}