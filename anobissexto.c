#include <stdio.h>

int main (){
     int ano;
     printf("Digite um ano e diremos se é bissexto ou não  \n");
     scanf("%d",&ano);
     if(ano % 4 == 0)
     printf("O ano %d bissexto \n",ano);
    else
        printf("O ano %d não é bissexto\n",ano);
}