#include <stdio.h>
 
main()
{
  float f;
  float c;
 
  printf("Entre com graus em Farenheit\n");
  scanf("%f", &f);
  c = (f-32)/1.8;
  printf("Valor em celsius = %f\n",c);
}

