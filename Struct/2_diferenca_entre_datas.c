#include <stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

struct dma duracao (struct dma x, struct dma y);

int main(){
  int dia,mes,ano,out;
  struct dma datainicio;
  struct dma datafim;
  
  printf("Digite a data inicial separada por espacos: ");
  scanf("%d %d %d",&dia,&mes,&ano);
  datainicio.dia = dia;
  datainicio.mes = mes;
  datainicio.ano = ano;
  printf("Digite a data final separada por espacos: ");
  scanf("%d %d %d",&dia,&mes,&ano);
  datainicio.dia = dia;
  datainicio.mes = mes;
  datainicio.ano = ano;
  printf("Digite a duracao do evento em dias: ");
  out = duracao(datainicio,datafim);
  printf("O evento durou %d dias\n",out);
}
struct dma duracao (struct dma x, struct dma y){
  int data,dia,mes,ano;
  
  if(x.dia>y.dia){
    dia=x.dia-y.dia;
  }
  else if(x.dia<y.dia){
    dia=y.dia-x.dia;
  }
  else{
    dia=x.dia
  } 
  if(x.mes>y.mes){
    mes=x.dia-y.dia;
  }
  else if(x.mes<y.mes){
    mes=y.dia-x.dia;
  }
  else{
    mes=x.dia
  }
  
  if(x.ano>y.ano){
    ano=x.dia-y.dia;
  }
  else if(x.ano<y.ano){
    ano=y.dia-x.dia;
  }
  else{
    ano=x.dia
  }
  
  return dia+mes*=30+ano*=360;
  ;  
}