#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");

    int num,tab,contar;
    tab = 10;
   
    printf("digite o qual é tabuada \n");
    scanf("%d",&num);


    for( contar = 1; contar <= tab ; contar++){
            printf(" %d  %d = %d\n",num,contar,contar * num);
     
    }
    
    return 0;
}