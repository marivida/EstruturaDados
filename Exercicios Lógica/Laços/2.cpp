/*
2 –  Faça um programa que mostre as tabuadas dos números de 1 a 10 usando laços de repetição.
*/

#include <stdio.h>

int main(){
    
    for (int i = 1; i <= 10; i++)
    {
        printf("\n\nTabuada do %d:\n", i);
        for (int j = 0; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    
    return 0;
}