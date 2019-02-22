#include <stdio.h>


main ()
{
    float salario,novosalario;
    char cargo;


    printf("Entre com o salario do funcionario\n");
    scanf ("%f",&salario);
    printf("Entre com o cargo do funcionario(A,B,C):");
    scanf (" %c",&cargo);
    printf("%c\n",cargo);

    //para nao acontecer erros, verifica-se se o caracter é exatamente o solicitado, se sim, o programa executa normalmente.
    if(cargo== 'A' || cargo=='B' || cargo=='C') {
        switch(cargo) {
        case 'A':
            novosalario = (salario*0.1)+salario;
            printf("Novo salario do funcionario = %f\n", novosalario);
            break;
        case 'B':
            novosalario = (salario*0.15)+salario;
            printf("Novo salario do funcionario = %f\n", novosalario);
            break;
        case 'C':
            novosalario = (salario*0.2)+salario;
            printf("Novo salario do funcionario = %f\n", novosalario);
            break;
        }
    }
}
