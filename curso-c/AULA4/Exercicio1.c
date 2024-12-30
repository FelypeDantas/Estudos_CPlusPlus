#include <stdio.h>

int main()
{
    int numeros[20][10];

    for(int i=0; i<20; i++){
        for(int j = 0; j<10; j++){
            printf("%d", numeros[i][j]);
        }
        printf("\n");
    }
}