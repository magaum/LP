#include <stdio.h>

void menor_que_n(int vetor[],int menor,int N,int *soma_out);

int main(){

    int i,N, I,menor,out=0;
    //int vetor[5];
    printf("digite o tamanho do vetor: ");
    scanf("%d",&N);
    int vetor[N];
    for (i=0;i<N;i++){
        printf("digite o valor para o vetor na posicao %d: ",i+1);
        scanf("%d",&vetor[i]);
    }printf("\n");
    printf("digite a posicao do vetor para ser comparada: ");
    scanf("%d",&I);
    if (I>N){
        do{
            printf("A posição não existe no vetor, digite outro valor para ser comparado: ");
            scanf("%d",&I);
        }while(I>N);
    }
    menor=vetor[I];
  
    menor_que_n(vetor,menor,N,&out);

    printf("%d elementos são menores que %d\n",out,menor);
}

void menor_que_n(int vetor[],int menor,int N,int *soma_out){
    int i;
    for (i=0;i<N;i++){
        if (vetor[i]<menor){
            *soma_out=*soma_out+1;
        }
    }
}