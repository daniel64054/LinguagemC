#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    char nome[] ="";
    //char* pnome = &nome;

    printf("Digite seu nome \n");
    scanf("%s",&nome);
    printf("olá %s\n",nome);
}