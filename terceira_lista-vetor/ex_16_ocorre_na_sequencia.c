#include <stdio.h>

/*

	Dada uma sequencia de n números reais, determinar os números que compõem a
seqüência e o número de vezes que cada um deles ocorre na mesma.
	Exemplo: n = 8
	Seqüência: -1.7,3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1,7
	Saída:
	-1.7	ocorre 3 vezes
	3.0	ocorre 1 vezes
	0.0	ocorre 2 vezes
	1.5	ocorre 1 vezes
	2.3	ocorre 1 vezes

*/

int main(){

	int sequencia[50],repete,i=0,k=0,j=0,ocorre=0;

	printf("-1.7,3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1,7\n\nDigite a quantidade de numeros que terá a sequencia: ");
	scanf("%d",&repete);
	for (i=0;i<repete;i++){
		printf("Digite o %d° número da sequecia: ",i+1);
		scanf("%d",&sequencia[i]);
	}
	for (i=0;i<repete;i++){
		k=0;
		j=0;
		ocorre=0;
		for(j=0;j<repete;k++){
			j++;
			if(sequencia[i]==sequencia[k]){
				ocorre++;
			}
		}
		printf("%d ocorre %d vezes\n",sequencia[i],ocorre);
	}
}
