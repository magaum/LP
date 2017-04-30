#include <stdio.h>
#include <string.h>
#define vetor 5

int main(){
  
	char matriz[vetor][vetor], linhas[vetor], matriz_infectada[vetor][vetor];
	int x, y, flag=1;
  
	for (x=0;x<vetor;x++){
		gets(linhas);
		for(y=0; y<vetor ; y++){
			matriz[x][y]=linhas[y];
		}
	}
//	while (flag){
//		flag=0;
		for (x=0;x<vetor;x++){
			for(y=0;y<vetor;y++){
				if (x==0&&y==0){//ponta superior esquerda
					if (matriz[0][1]=='1'&&matriz[1][0]=='1'){
						flag=1;
						matriz[x][y]='1';
					}
				}
				else if(x==0&&y==4){//ponta superior direita
					if (matriz[0][3]=='1'&&matriz[1][4]=='1'){
						flag=1;
						matriz[x][y]='1';
					}
				}
				else if(x==4&&y==0){//ponta inferior esquerda
					if (matriz[3][0]=='1'&&matriz[4][1]=='1'){
						flag=1;
						matriz[x][y]='1';
					}
				}
				else if(x==4&&y==4){//ponta inferior direita
					if (matriz[4][3]=='1'&&matriz[3][4]=='1'){
						flag=1;
						matriz[x][y]='1';
					}
				}
				else if(x==0&&(y==1||y==2||y==3)){//lateral superior
					if (matriz[x][y-1]=='1'&&matriz[x][y+1]=='1' || matriz[x][y-1]=='1'&&matriz[x+1][y]=='1' || matriz[x][y+1]=='1'&&matriz[x+1][y]=='1'){
						flag=1;
						matriz[x][y]='1';
					}
				}
				else if(x==4&&(y==1||y==2||y==3)){//lateral inferior
					if (matriz[x][y-1]=='1'&&matriz[x][y+1]=='1' || matriz[x][y-1]=='1'&&matriz[x-1][y]=='1' || matriz[x][y-1]=='1'&&matriz[x-1][y]=='1'){
						flag=1;
						matriz[x][y]='1';
					}
				}
				else if (y==0&&(x==1||x==2||x==3)){//lateral esquerda
					if (matriz[x-1][y]=='1'&&matriz[x+1][y]=='1' || matriz[x][y+1]=='1'&&matriz[x-1][y]=='1' || matriz[x][y+1]=='1'&&matriz[x+1][y]=='1'){
						flag=1;
						matriz[x][y]='1';
					}
				}
				else if (y==4&&(x==1||x==2||x==3)){//lateral direita
					if (matriz[x-1][y]=='1'&&matriz[x+1][y]=='1' || matriz[x][y-1]=='1'&&matriz[x-1][y]=='1' || matriz[x][y-1]=='1'&&matriz[x+1][y]=='1'){
						flag=1;
						matriz[x][y]='1';
					}
				}
				else{//meio
					if (matriz[x-1][y]=='1'&&matriz[x+1][y]=='1' || matriz[x][y+1]=='1'&&matriz[x][y-1]=='1' || matriz[x][y-1]=='1'&&matriz[x-1][y]=='1' || matriz[x-1][y]=='1'&&matriz[x][y+1]=='1' || matriz[x][y+1]=='1'&&matriz[x+1][y]=='1' || matriz[x+1][y]=='1'&&matriz[x][y-1]=='1'){
						flag=1;
						matriz[x][y]='1';
					}
				}
			}
		}
//	}
	printf("\n");
	for (x=0;x<vetor;x++){
		for(y=0;y<vetor;y++){
			printf("%c", matriz[x][y]);
		}printf("\n");
	}
}
