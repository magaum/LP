#include <stdio.h>
#include <string.h>
#define vetor 5

int main(){
  
  char matriz[vetor][vetor], xxx[vetor];
  int x, y;
  
 /* for (x=0;x<vetor;x++){
    gets(xxx);
      for(y=0; y<vetor ; y++){
        matriz[x][y]=xxx[y];
      }
   }*/
  
  for (x=0;x<vetor;x++){
    for(y=0;y<vetor;y++){
      //matriz[4][0]=3;
      //matriz[4][2]=3;
      //matriz[3][1]=3;
      if (x==0&&y==0){
        matriz[x][y]=0;
        if (matriz[0][1]==3&&matriz[1][0]==3){
          matriz[x][y]=1;
        }
      }else if(x==0&&y==4){
        if (matriz[0][3]==1&&matriz[1][4]==1){
          matriz[x][y]=1;
        }
      }else if(x==4&&y==0){
        matriz[x][y]=0;
        if (matriz[3][0]==1&&matriz[4][1]==1){
          matriz[x][y]=1;
        }
      }else if(x==4&&y==4){
        matriz[x][y]=0;
        if (matriz[4][3]==1&&matriz[3][4]==1){
          matriz[x][y]=1;
        }
      }else if(x==0&&(y==1||y==2||y==3)){
        if (matriz[x][y-1]==1&&matriz[x][y+1]==1||matriz[x][y-1]==1&&matriz[x+1][y]==1||matriz[x][y+1]==1&&matriz[x+1][y]==1){
          matriz[x][y]=1;
        }
      }else if(x==4&&(y==1||y==2||y==3)){
        if (matriz[x][y-1]==1&&matriz[x][y+1]==1||matriz[x][y-1]==1&&matriz[x-1][y]==1||matriz[x][y-1]==1&&matriz[x-1][y]==1){
          matriz[x][y]=1;
        }
      }else if (y==0&&(x==1||x==2||x==3)){
        matriz[x][y]=1;
      }else if (y==4&&(x==1||x==2||x==3)){
        matriz[x][y]=1;
      }else{
        matriz[x][y]=0;
      }
    }
  }
  
  for (x=0;x<vetor;x++){
    for(y=0;y<vetor;y++){
      printf("%d", matriz[x][y]);
    }printf("\n");
  }
}