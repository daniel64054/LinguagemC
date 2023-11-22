
#include<stdio.h>
#include<stdlib.h>
#include"cabecalho.h"


int main(){
    tela();
    system("Mkdir DOC");//para executar comandos do linux
    system("cd DOC");
    system("touch elemetos.txt");
    printf("Os comandos foram execultados....\n");
    return 0;
}