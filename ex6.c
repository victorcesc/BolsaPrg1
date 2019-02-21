#include <stdio.h>
 
main()
{
  float v,i,r;
  
 
  printf("Entre com a resistencia\n");
  scanf("%f", &r);
  printf("Entre com a tensao\n");
  scanf("%f",&v);
  i = v/r;
  printf("Valor da corrente = %f\n",i);
}
