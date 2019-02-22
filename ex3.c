#include <stdio.h>

main ()
{
    float a,b,c,d;
    float soma1,soma2;

    printf("Entre com o primeiro numero\n");
    scanf("%f",&a);
    printf("Entre com o segundo numero\n");
    scanf("%f",&b);
    printf("Entre com o terceiro numero\n");
    scanf("%f",&c);
    printf("Entre com o quarto numero\n");
    scanf("%f",&d);
    soma1 = a+b;
    soma2 = c+d;
    //se x igual a y
    if (soma1 <= soma2)
        printf("A soma é menor ou igual\n");

}
