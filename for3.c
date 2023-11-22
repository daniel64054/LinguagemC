#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");

    int anoi,anof,contar,qtd;
    qtd=0;

    printf("digite o ano  inicial\n");
    scanf("%d",&anoi);

    printf("digite o  ano  final\n");
    scanf("%d",&anof);

    for(contar = anoi ; contar <= anof ; contar++){
        if (contar % 4 == 0){
            printf("O ano %d é bissexto\n",contar);
            qtd++;
        }
        
    }
    printf("A quantidade de anos bissexto %d\n",qtd);
    return 0;
}