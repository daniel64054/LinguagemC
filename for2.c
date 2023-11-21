#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int x;
    for(x = 1 ; x <=100; x++){
        if(x % 2 == 0 ){
            printf("O Número %d é par\n",x);
        }
    }
    return 0;
}