#include <stdio.h>
#define vetor 5

int main(){
  
	char matriz[vetor][vetor];
	int x, y, flag;

	while(-1){
		flag=7;
		for (x=0;x<vetor;x++){
			if(scanf("%s",matriz[x])==EOF){
				return 0;
			}
		}
/*											partes que estão sendo testadas
												    __
	ex.: se a poição do vetor é 0x0 as posições 0x1 e 1x0 precisam ser testadas, o teste será: | 
	se a posição for 0x1 as posições:
		0x0 e 0x2 __
		0x0 e 1x1 '\'
		0x2 e 1x1 '/'
	precisam ser testadas.

*/
		while (flag){
			for (x=0;x<vetor;x++){
				for(y=0;y<vetor;y++){
					if (x==0&&y==0){//ponta superior esquerda
						if (matriz[0][1]=='1'&&matriz[1][0]=='1'){	// __
							matriz[x][y]='1';			//|
						}
					}
					if(x==0&&y==4){//ponta superior direita
						if (matriz[0][3]=='1'&&matriz[1][4]=='1'){	//__
							matriz[x][y]='1';			//  |
						}
					}
					if(x==4&&y==0){//ponta inferior esquerda
						if (matriz[3][0]=='1'&&matriz[4][1]=='1'){	//
							matriz[x][y]='1';			//|__
						}
					}
					if(x==4&&y==4){//ponta inferior direita
						if (matriz[4][3]=='1'&&matriz[3][4]=='1'){	//
							matriz[x][y]='1';			//__|
						}
					}
					if(x==0&&(y==1||y==2||y==3)){//lateral superior
						if (	matriz[x][y-1]=='1'&&matriz[x][y+1]=='1' ||	// __
							matriz[x][y-1]=='1'&&matriz[x+1][y]=='1' ||	// '/'
							matriz[x][y+1]=='1'&&matriz[x+1][y]=='1'){ 	// '\'
							matriz[x][y]='1';
						}
					}
					if(x==4&&(y==1||y==2||y==3)){//lateral inferior
						if (	matriz[x][y-1]=='1'&&matriz[x][y+1]=='1' ||	// __
							matriz[x][y-1]=='1'&&matriz[x-1][y]=='1' ||	// '/'
							matriz[x][y+1]=='1'&&matriz[x-1][y]=='1'){	// '\'
							matriz[x][y]='1';
						}
					}
					if (y==0&&(x==1||x==2||x==3)){//lateral esquerda
						if (	matriz[x-1][y]=='1'&&matriz[x+1][y]=='1' ||	// | 
							matriz[x-1][y]=='1'&&matriz[x][y+1]=='1' ||	// '\'
							matriz[x+1][y]=='1'&&matriz[x][y+1]=='1'){	// '/'
							matriz[x][y]='1';
						}
					}
					if (y==4&&(x==1||x==2||x==3)){//lateral direita
						if (	matriz[x-1][y]=='1'&&matriz[x+1][y]=='1' ||	// |
							matriz[x-1][y]=='1'&&matriz[x][y-1]=='1' ||	// '/'
							matriz[x+1][y]=='1'&&matriz[x][y-1]=='1'){	// '\'
							matriz[x][y]='1';
						}
					}
					if (x!=0&&x!=4&&y!=0&&y!=4){//meio
						if (	matriz[x-1][y]=='1'&&matriz[x+1][y]=='1' ||	// |
							matriz[x-1][y]=='1'&&matriz[x][y+1]=='1' ||	// '\' parte superior
							matriz[x+1][y]=='1'&&matriz[x][y-1]=='1' ||	// '\' parte inferior
							matriz[x][y+1]=='1'&&matriz[x][y-1]=='1' ||	// __
							matriz[x][y-1]=='1'&&matriz[x-1][y]=='1' ||	// '/' parte superior
							matriz[x][y+1]=='1'&&matriz[x+1][y]=='1'){	// '/' parte inferior
							matriz[x][y]='1';
						}
					}
				}
			}flag--;
		}
		for (x=0;x<vetor;x++){
			for(y=0;y<vetor;y++){
				printf("%c", matriz[x][y]);
			}printf("\n");
		}
	}
}
