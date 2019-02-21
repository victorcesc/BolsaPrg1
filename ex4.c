#include<stdio.h>
#include<math.h>
main()
{
  int x,y;
  float resto;
   
  printf("Entre com x\n");
  scanf("%f", &x);
  printf("Entre com y\n");
  scanf("%f", &y);
  resto = (x+y) % 2;//usamos o operador % para obter o resto da divisão
  printf("Valor do resto da media = %d\n",resto);
}
