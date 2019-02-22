#include <stdio.h>
 
main ()
{
  float rad,graus;
  
 
  printf("Entre com o angulo em rad\n");
  scanf("%f",&rad);
 
  graus = rad*(180/3.1415);
  printf("O angulo em graus = %f\n",graus);
  
}
