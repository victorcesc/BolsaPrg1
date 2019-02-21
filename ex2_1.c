#include <stdio.h>

//solucao com a variacao usando um aux para as variaveis nao ficar com mesmo valor
main()
{
int alfa,beta,gama,delta,aux;
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
	aux = beta;//utiliza-se a variavel 'aux' para armazenar o conteudo sem  perder o valor da variavel original
    beta = alfa;//coloca o conteudo de alfa para beta
    printf("Novo valor de beta = %d\n",beta);
    beta = aux;//volta o valor original da variavel utilizando o conteudo de 'aux'
    aux = gama;//novamente se utiliza 'aux'...
    gama = beta;//coloca o conteudo de beta para gama
    printf("Novo valor de gama = %d\n",gama);
    gama = aux;//volta o valor original da variavel utilizando o conteudo de 'aux'
    aux = alfa;
    alfa = gama;//coloca o conteudo de gama para alfa
    printf("Novo valor de alfa = %d\n",alfa);
}
