#include<stdio.h>

main(){
  float lado1,lado2,lado3;

  printf("Insira o valor do lado 1 do triangulo\n");
  scanf("%f",&lado1);
  printf("Insira o valor do lado 2 do triangulo\n");
  scanf("%f",&lado2);
  printf("Insira o valor do lado 3 do triangulo\n");
  scanf("%f",&lado3);	 
 
  if(lado1>(lado2+lado3) || lado2>(lado1+lado3) || lado3>(lado1+lado2)){
      printf("não é triângulo\n");
  }else if(lado1==lado2 && lado1==lado3){
      printf("equilatero\n");
  }else if(lado1==lado2 || lado1==lado3 || lado2==lado3){
       printf("isósceles\n");
  }else{
       printf("escaleno\n");       
  }
   

}
