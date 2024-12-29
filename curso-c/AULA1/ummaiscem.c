#include <stdio.h>

int main() {
    int soma = 0;

    // Loop para somar os números de 1 até 100
    for (int i = 1; i <= 100; i++) {
        soma += i;
    }

    // Imprime o resultado da soma
    printf("A soma de todos os números de 1 até 100 é: %d\n", soma);

    return 0;
}
