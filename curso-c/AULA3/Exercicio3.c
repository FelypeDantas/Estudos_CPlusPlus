#include <stdio.h>

int main()
{
    double distancia;
    double temperatura;

    printf("Qual é a distância da lâmpada do chão em Metros: ");
    scanf("%lf", &distancia);

    printf("Qual é a temperatura da lâmpada em celsius: ");
    scanf("%lf", &temperatura);

    if(distancia >= 3){
        printf("Pegar escada\n");
    }

    if(temperatura >= 40){
        printf("Pegar um pano\n");
    }

    printf("Tirar lâmpada queimada\n");
    printf("Colocar lâmpada boa");
}