#include <stdio.h>

//ele faz um loop a mais porém dá o resultado certo, não identifiquei o motivo ainda

/* ###ENUNCIADO###

  Dado um número inteiro positivo n, calcular a soma dos n primeiros
números naturais.
*/


int main(){

         int n, repeticao, soma;
 
         scanf("%d", &n);
         for (repeticao = 1; repeticao <= n; repeticao ++){
                 soma += repeticao;
         }
         printf("%d\n", soma);
         return 0;

}
