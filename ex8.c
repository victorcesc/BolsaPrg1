#include <stdio.h>
#include <math.h> //precisa incluir para usar a função sqrt()
//Alem disso na hora da compilação precisa-se utilizar o comando "-lm" para linkar a biblioteca math.h com seu aplicativo.
//ficaria assim "gcc 'nome_do_arquivo' -o 'nome_de_saida_do_app' -lm"

main ()
{
    float a,b,c;
    float x1,x2;


    printf("Entre com o 'a'\n");
    scanf("%f",&a);
    printf("Entre com o 'b'\n");
    scanf("%f",&b);
    printf("Entre com o 'c'\n");
    scanf("%f",&c);

    if(a!=0) {
        x1 = ( -b + (sqrtf((b*b)-4*a*c)) )/(2*a);
        x2 = ( -b - (sqrtf((b*b)-4*a*c)) )/(2*a);
        printf("Raiz x1 : %f\n",x1);
        printf("Raiz x2 : %f\n",x2);
    } else {
        printf("O 'a' precisa ser diferente de zero\n");
    }
}
