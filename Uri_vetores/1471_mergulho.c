#include <stdio.h>

/*
    Entrada

A entrada contém vários casos de teste e termina com EOF.
Cada caso de teste é composto de duas linhas.
A primeira linha contém dois inteiros N e R ( 1 ≤ R ≤ N ≤ 10^4)
indicando respectivamente o número de voluntários que mergulhou e o número de voluntários que retornou do mergulho.
Os voluntários são identificados por números de 1 a N.
A segunda linha da entrada contém R inteiros, indicando os voluntários que retornaram do mergulho
(ao menos um voluntário retorna do mergulho).

    Saída

Seu programa deve produzir uma única linha para cada caso de teste,
contendo os identificadores dos voluntários que não retornaram do mergulho,
na ordem crescente de suas identificações.
Deixe um espaço em branco após cada identificador
(note que isto significa que deve haver um espaço em branco também após o último identificador).
Se todos os voluntários retornaram do mergulho, imprima apenas o caractere ‘*’ (asterisco).

Entrada         Saída

5 3
3 1 5           2 4
6 6
6 1 3 2 5 4     *


*/

int main(){

	int N,R,i,j,aux=0,flag=1;
    
	scanf("%d %d",&N, &R);
	int voltaram[R],N_voltaram[N-R],vetor[R];
	for(i=0;i<R;i++){
		scanf("%d",&voltaram[i]);
	}
	if(N!=R){
		for(i=0;i<N;i++){
			vetor[i]=i+1;
		}
		for(i=0;i<N;i++){
			for(j=0;j<R;j++){
				if (voltaram[j]==vetor[i]){
					flag=0;
					break;
				}
			}
			if(flag){
					N_voltaram[aux]=vetor[i];
				aux++;
			}
			flag=1;
		}
		for(i=0;i<N-R;i++){
			printf("%d ",N_voltaram[i]);
		}
	printf("\n");
	}else{
			printf("*\n");
	}
	return 0;

}
