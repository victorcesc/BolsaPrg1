#include <stdio.h>
 
main()
{
  float vx1,vx2,vy1,vy2;
  float result;
 
  printf("Entre com o x do primeiro vetor\n");
  scanf("%f",&vx1);
  printf("Entre com o y do primeiro vetor\n");
  scanf("%f",&vy1);
  printf("Entre com o x do segundo vetor\n");
  scanf("%f",&vx2);	  
  printf("Entre com o y do segundo vetor\n");
  scanf("%f",&vy2);
  printf("O primeiro vetor ficou assim = (%f,%f)\n",vx1,vy1);
  printf("O segundo vetor ficou assim = (%f,%f)\n",vx2,vy2);
  result = (vx1*vx2) + (vy1*vy2);//equacao do produto escalar tem que retornar um numero
  printf("Valor do produto escalar = %f\n",result);
}
