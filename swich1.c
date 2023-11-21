#include <stdio.h>
#include <stdlib.h>

int main(){
  system("clear");
  int final_placa;

  printf("digite o final numero da sua placa\n");
  scanf("%d",&final_placa);

  switch(final_placa){//sistema de divisão de caminho swich

        case 1:
            printf("Rodizio de veiculos na segunda feira\n");
        break;

        case 2:
            printf("Rodizio de veiculos na segunda feiraz\n");
        break;

        case 3:
            printf("Rodizio de veiculos na terça feira\n");
        break;

        case 4:
            printf("Rodizio de veiculos na terça feira\n");
        break;

        case 5:
            printf("Rodizio de veiculos na quarta feira\n");
        break;
        case 6:
            printf("Rodizio de veiculos na quarta feira\n");
        break;
        case 7:
            printf("Rodizio de veiculos na quinta feira\n");
        break;
        case 8:
            printf("Rodizio de veiculos na quinta feira\n");
        break;
        case 9:
            printf("Rodizio de veiculos na sexta feira\n");
        break;
        case 0:
            printf("Rodizio de veiculos na sexta feira\n");
        break;

        default:
        printf("Este final não existe\n");
        break;
  }
  return 0;
}