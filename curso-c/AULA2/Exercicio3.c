#include <stdio.h>

/* Algoritmo 04_03: Solicite a digitação do saldo atual da caderneta de
 poupança, exiba o resultado do reajuste de 1% sobre o valor digitado e
 informe ao usuário. */

int main()
{
    double saldo;

    printf("Digite o saldo atual da poupança: ");
    scanf("%lf", &saldo);

    double reajuste = (saldo * 0.01) + saldo;

    printf("O reajuste está em %2f", reajuste);
}