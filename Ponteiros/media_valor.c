#include <stdio.h>

void media_moda(int *media, int *moda, int tam, int vetor[]);

int main(){

        int tam=7,i,vetor[tam],media,moda=0;
                       
        for (i=0;i<tam;i++){
                scanf("%d",&vetor[i]);
        }

        media_moda(&media,&moda,tam,vetor);

        printf("Media:\tModa:\n%d\t%d\n",media,moda);

}

void media_moda(int *media, int *moda, int tam, int vetor[]){

        int soma=0,i,j,maior=0;
  
        for (i=0;i<tam;i++){
              soma+=vetor[i];
              for(j=0;j<tam;j++){
                      if(vetor[i]==vetor[j]){
                            maior++;
                            if(maior>*moda){
                                  *moda=vetor[i];
                            }
                      }
              }
              maior=0;
        }
        *media=soma/tam;
}