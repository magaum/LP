#include <stdio.h>

int main(){
  int x[11]={10, 20, 30, 40, 50, 60, 70, 80, 90, 1000, 2000}, *p,a=0;
  
  p=x;

  printf("&p = %p\n",&p);
  printf("p = %p\n", p);
  printf("p + 10 = %p\n", p + 10);
  printf("*(p + 10) = %d\n", *(p+10));
  printf("x = %p\n", x);
  printf("&x[10] = %p\n", &x[10]);
  printf("x[10] = %d\n", x[10]);

}