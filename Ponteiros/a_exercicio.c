#include <stdio.h>
#define MAX 3

void retorna_maior(int A[MAX][MAX], int n, int *k, int *Lin, int *Col);

int main(){
  
  int x,y,A[MAX][MAX],n=MAX,maior=0,linha,coluna;
  
  for (y=0;y<MAX;y++){
    for(x=0;x<MAX;x++){
      scanf("%d",&A[y][x]);
    }
  }
  
  retorna_maior(A,n,&maior,&linha,&coluna);
  
  printf("K %d\nLin %d\nCol %d\n",maior,linha,coluna);
  
  return 0;
}

void retorna_maior(int A[MAX][MAX], int n, int *k, int *Lin, int *Col){
  int x,y;
  for (y=0;y<n;y++){
    for(x=0;x<n;x++){
      if(*k<A[y][x]){
        *k = A[y][x];
        *Lin = y;
        *Col = x;
      }
    }
  }
}