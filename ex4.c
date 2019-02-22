#include <stdio.h>

main ()
{
    float x,y;
    float result;
    int i;

    printf("Entre com o primeiro numero real\n");
    scanf("%f",&x);
    printf("Entre com o segundo numero real\n");
    scanf("%f",&y);
    printf("Entre com o numero inteiro\n");
    scanf("%d",&i);
    //se x igual a y
    if (i>4 || i<1) {
        printf("O Numero inteiro só pode ser entre 1 e 4\n");
    } else { //utilizei if, porem pode-se utilizar switch case.
        if(i==1) {
            result = x+y;
            printf("Soma: %f\n",result);
        }
        if(i==2) {
            result = x-y;
            printf("Subtração: %f\n",result);
        }
        if(i==3) {
            result = x*y;
            printf("Multiplicacao: %f\n",result);
        }
        if(i==4) {
            if(y==0) {
                printf("Não é possivel dividir por zero\n");
            } else {
                result = x/y;
                printf("Divisao: %f\n",result);
            }
        }
    }
}
