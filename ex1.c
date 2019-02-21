#include <stdio.h>
 
main()
{
 float r1,r2,reqS,reqP;
 printf("Entre com r1:\n");
 scanf("%f",&r1);
 printf("Entre com r2:\n");
 scanf("%f",&r2);
 reqS = r1+r2; 
 reqP = (r1*r2)/(r1+r2);
 printf ("Valor da req serie = %f\n",reqS);
 printf ("Valor da req paralelo = %f\n",reqP);
}

