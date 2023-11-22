#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int dec=0,rest=0,resultado=0,mult=1;
    
    printf("Digite um numero decimal\n");
    scanf("%d",&dec);
    
    while (dec > 0 )
    {
        rest  = dec % 2;
        dec = dec /2;
        resultado = resultado + rest * mult;
       mult = mult * 10;
    
    }
    printf("O numero decimal convertido e %d\n",resultado);
    return 0;
}