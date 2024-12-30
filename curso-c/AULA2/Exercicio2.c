#include <stdio.h>

/* Algoritmo 0402: Solicite a digitação de quatro números e exibir a média
 ponderada dos mesmos. Sendo que os respectivos pesos são 1, 2, 3 e 4*/

int main()
{
    double vetorDeNotas[4];

    for(int i=0; i < 4; i++){
        printf("Digite a nota %d : ", i);
        scanf("%lf", &vetorDeNotas[i]);
        if(i == 0){
            vetorDeNotas[i] = vetorDeNotas[i] * 1;
        } else if(i == 1){
            vetorDeNotas[i] = vetorDeNotas[i] * 2;
        } else if(i == 2){
            vetorDeNotas[i] = vetorDeNotas[i] * 3;
        } else {
            vetorDeNotas[i] = vetorDeNotas[i] * 4;
        }
    }

    double media = (vetorDeNotas[0] + vetorDeNotas[1] + vetorDeNotas[2] + vetorDeNotas[3]) / 10;

    printf("a média é de: %2f", media);
}