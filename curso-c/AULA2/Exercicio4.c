#include <stdio.h>

/*  Algoritmo 04_04: Miguel resolveu fazer uma aplicação de R$ 500,00
 (quinhentos reais) por seis meses a uma taxa de juros de 1% */

 int main()
 {
    double aplicacao = 500.00;
    int n = 6;
    double i = 0.01;

    double valor = (1 + i) * (1 + i);
    valor = valor - 1;
    valor = valor / i;
    printf("o valor acumulado será de: %2f" , valor);
 }