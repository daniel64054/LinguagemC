#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int num[10] ={10,25,20,40,19,18,5,60,2,37};
    int soma = 0, i =0;

    while (i < 10)
    {
        soma += num[i];
         i++; 
    }
    printf("O resultado da conta é %d\n",soma);

    return 0;
}