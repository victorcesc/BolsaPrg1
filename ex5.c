#include <stdio.h>
 
main()
{
  float area,comp;
  float raio;
 
  printf("Entre com o raio do circulo\n");
  scanf("%f", &raio);
  comp = 2*3.1415*raio;
  printf("Valor da comprimento do circulo = %f\n",comp);
  area = 3.1415*raio*raio;
  printf("Valor da area do circulo = %f\n",area);
}
