#include <stdio.h>

main()
{
    int alfa,beta,gama,delta;
    printf("Entre com alfa\n");
    scanf("%d", &alfa);
    printf("Entre com delta\n");
    scanf("%d",&delta);
    printf("Entre com gama\n");
    scanf("%d", &gama);
    printf("Entre com beta\n");
    scanf("%d",&beta);
    printf("Valor de alfa = %d\n",alfa);
    printf("Valor de delta = %d\n",delta);
    printf("Valor de gama = %d\n",gama);
    printf("Valor de beta = %d\n",beta);
    printf("Iniciam-se as trocas\n");
    beta = alfa;//coloca o conteudo de alfa para beta
    printf("Novo valor de beta = %d\n",beta);
    gama = beta;//coloca o conteudo de beta para gama
    printf("Novo valor de gama = %d\n",gama);
    alfa = gama;//coloca o conteudo de gama para alfa
    printf("Novo valor de alfa = %d\n",alfa);


}
