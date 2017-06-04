#include <stdio.h>

struct hm{
   int horas;
   int minutos;
};

struct hm hora_minuto(int tempo);

int main(){
   int tempo;
   struct hm out;
   printf("Digite o tempo em minutos: ");
   scanf("%d",&tempo);
   out=hora_minuto(tempo);
   printf("%d minutos são %d horas e %d minutos\n",tempo,out.horas,out.minutos);
}

struct hm hora_minuto(int x){
   struct hm tempo;
   int hora,minuto;
   if (x>=60){
      hora=x/60;
      tempo.horas=hora;
      x-=hora*60;
   }else{
      hora=0;
   }
   tempo.minutos=x;
   return tempo;
}
