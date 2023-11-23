#include <stdio.h>
#include <stdlib.h>


 char* msg();

int main(){
    system("clear");
    printf("%s",msg());

    msg();
    return 0;

}

char* msg (){
    return "Ola mundo";
}