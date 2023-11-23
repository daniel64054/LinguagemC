
#include"cabecalho.h"

int main(){
    FILE *arq = fpoen("texto.txt","w");
    fprintf(arq,"Hoje é dia de feijõada");
    fclose(arq);

    printf("O arquivo foi criado...\n");
}