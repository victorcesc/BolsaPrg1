#include <stdio.h>

main ()
{
    float x,y,media;

    printf("Entre com o primeiro numero\n");
    scanf("%f",&x);
    printf("Entre com o segundo numero\n");
    scanf("%f",&y);
    //se x igual a y
    if (x==y) {
        printf("Os numeros são iguais\n");
    } else { //senao
        printf("Os numeros são diferentes\n");
        media = (x+y)/2;
        printf("Media dos numeros = %f\n",media);
    }
}
