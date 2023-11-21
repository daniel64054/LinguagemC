#include <stdio.h>
//comando clrscr para limpar a tela

int main (){
    //vamos usar o  comando clrscr(clear scen)
    
    int numero;
    printf("Digite um número e lhe diremos se é par ou impar\n");
    scanf("%d",&numero);
    if(numero % 2 == 0)
        printf("O número %d é par \n",numero);
    else
        printf("O número %d é impar\n",numero);

}