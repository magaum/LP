#include <stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

int duracao (struct dma x, struct dma y);

int main(){
  int dia,mes,ano, out;
  struct dma datainicio;
  struct dma datafim;
  
  printf("Digite a data inicial separada por espacos: ");
  scanf("%d %d %d",&dia,&mes,&ano);
  datainicio.dia = dia;
  datainicio.mes = mes;
  datainicio.ano = ano;
  printf("Digite a data final separada por espacos: ");
  scanf("%d %d %d",&dia,&mes,&ano);
  datafim.dia = dia;
  datafim.mes = mes;
  datafim.ano = ano;
  out = duracao(datainicio,datafim);
  printf("O evento durou %d dias\n",out);
}
int duracao ( struct dma x, struct dma y){
  int data,dia,mes,ano;
  
  if(x.dia>y.dia){
    dia=x.dia-y.dia;
  }
  else if(x.dia<y.dia){
    dia=y.dia-x.dia;
  }
  else{
     dia=0;
  } 
  if(x.mes>y.mes){
    mes=x.mes-y.mes;
  }
  else if(x.mes<y.mes){
    mes=y.mes-x.mes;
  }
  else{
     mes=0;
  }
  
  if(x.ano>y.ano){
    ano=x.ano-y.ano;
  }
  else if(x.ano<y.ano){
    ano=y.ano-x.ano;
  }
  else{
     ano=0;
  }

  return dia+(mes*30)+(ano*360);
  ;  
}
