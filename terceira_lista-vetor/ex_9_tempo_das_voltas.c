#include <stdio.h>
#include <locale.h>

/*

	Durante uma corrida de automóveis com N voltas de duração foram anotados para
um piloto, na ordem, os tempos registrados em cada volta. Fazer um programa em
C para ler os tempos das N voltas, calcular e imprimir:

a. melhor tempo;

b. a volta em que o melhor tempo ocorreu;

c. tempo médio das N voltas;

*/

int main(){

	int volta=0, tempo=0,i=1,melhor_volta=0;
	float tempo_medio=0,melhor_tempo=0;
	
	printf("Digite o numero de voltas: ");
	scanf("%d",&volta);
	
	for (i;i<=volta;i++){
		printf("Digite o tempo da %d° volta: ",i);
		scanf("%d", &tempo);
		tempo_medio+=tempo;
		if (i==1){
			melhor_tempo=tempo;
		}
		if (melhor_tempo > tempo){
			melhor_tempo=tempo;
			melhor_volta=i;
		}
	}
	printf("a. Melhor tempo: %.2f\nb. Volta do melhor tempo %d\nc. Tempo médio %.2f\n",melhor_tempo, melhor_volta, tempo_medio/volta);
}
