
#include <stdio.h>

int main(){
    float n1,n2,so,su,mt,dv;

    printf("DIGITE O NÚMERO E tecle enter\n");
    scanf("%f",&n1);

    printf("DIGITE Outro NÚMERO E tecle enter\n");
    scanf("%f",&n2);

    so = n1 + n2;
    su = n1 - n2;
    mt = n1 * n2;
    dv = n1 / n2;

    printf("\n------------------------------------------------------------------------------------------------------------------\n");
       printf("\n-------------------------------------------Veja os resultados-------------------------------------------------------\n");
    printf("soma %2.2f                                                                                                           -\n",so);
    printf("subtração %2.2f                                                                                                       -\n",su);
    printf("mutiplicação %2.2f                                                                                                     -\n",mt);
    printf("Divição %2.2f                                                                                                           -\n",n1);
        printf("\n--------------------------------------------------------------------------------------------------------------------\n");

        return 0;
}