#include <stdio.h>


main ()
{
    int numero;



    printf("Entre com o numero de 0 ate 10\n");
    scanf ("%d",&numero);
    //para nao acontecer erros, verifica-se se o numero é exatamente o solicitado, se sim, o programa executa normalmente.
    if(numero > 0 || numero < 10) {
        switch(numero) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("Um\n");
            break;
        case 2:
            printf("Dois\n");
            break;
        case 3:
            printf("Tres\n");
            break;
        case 4:
            printf("Quatro\n");
            break;
        case 5:
            printf("Cinco\n");
            break;
        case 6:
            printf("Seis\n");
            break;
        case 7:
            printf("Sete\n");
            break;
        case 8:
            printf("Oito\n");
            break;
        case 9:
            printf("Nove\n");
            break;
        case 10:
            printf("Dez\n");
            break;
        }
    }
}
