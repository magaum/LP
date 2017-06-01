#include <stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

struct dma fim_evento (struct dma x, int duracao);

int main(){
  int dia,mes,ano,duracao;
  struct dma datainicio;
  printf("Digite o dia o mes e o ano separado por espacos: ");
  scanf("%d %d %d",&dia,&mes,&ano);
  datainicio.dia = dia;
  datainicio.mes = mes;
  datainicio.ano = ano;
  printf("Digite a duracao do evento em dias: ");
  scanf("%d",&duracao);
  printf("O evento comecou em %d/%d/%d e tem %d dias de duracao\n",datainicio.dia,datainicio.mes,datainicio.ano,duracao);
  fim_evento(datainicio,duracao);
  
  //printf("O evento acaba dia %d/%d/%d\n",x.dia,x.mes,x.ano);
}
struct dma fim_evento (struct dma x, int duracao){
  int aux=0;
  duracao+=x.dia;
  x.dia=1;
  while (duracao){
    duracao-=1;
    aux++;
    if (aux==30){
      x.mes++;
      aux=0;
      if(x.mes>12){
        x.ano++;
        x.mes=1;
      }
    }
  }
  if(aux>0){
    x.dia=aux;
  }
  //return x;
  printf("O evento acaba dia %d/%d/%d\n",x.dia,x.mes,x.ano);
  
}