#include <stdio.h>

main ()
{
    float temp;


    printf("Entre com a temperatura\n");
    scanf("%f",&temp);

    //se x igual a y
    if (temp >30)
        printf("Quente\n");
    else if(temp <= 30 && temp >= 25)
        printf("Morna\n");
    else if(temp < 25)
        printf("Fria\n");

}
