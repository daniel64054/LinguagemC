
/*Progama que realiza a soma entre dois numeros*/
/*inclusao da blibioteca de cabeçalho de entrada e saida*/
#include <stdio.h>

/*Função principal*/
int main(){
   int numero1,numero2,resultado;/*variavel inteiro*/

   printf("Digite um número\n");
   scanf ("%d",&numero1);/*alocação de resposta do usuario na variavel (Senpre usar & para indicar variavel)*/

   printf("Digite outro número \n");
   scanf("%d",&numero2);/*alocação de resposta do usuario na variavel*/

   resultado = numero1 + numero2 ;

   printf("O resultado da soma é %d\n\n",resultado);

   printf("posição em mémoria da variavel número1 %p\n",&numero1);/*Mostrando a posição em mémoria da variavel*/
   printf("posição em mémoria da variavel número2 %p\n",&numero2);
   printf("posição em mémoria da variavel resultado %p\n",&resultado);

}
