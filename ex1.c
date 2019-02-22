#include <stdio.h>

main ()
{
    int x,y;

    printf("Entre com um numero\n");
    scanf("%d",&x);

    y = x%2;
    //se a divisao por 2 tiver resto, é impar, caso contrario é par
    if (y==0)
        printf("O numero é par\n");
    else printf("O numero é impar\n");

}
