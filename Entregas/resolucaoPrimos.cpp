#include <stdio.h>

int is_prime(int num) {
    if (num <= 1)
        return 0;
    
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return 0;
    }
    
    return 1;
}

int main() {
    int number, choice;
    
    do {
        printf("Digite um número entre 0 e 500: ");
        scanf("%d", &number);
        
        if (number < 0 || number > 500) {
            printf("Número fora do intervalo permitido.\n");
            continue;
        }
        
        int even_count = 0, odd_count = 0, prime_count = 0;
        
        for (int i = 0; i <= number; ++i) {
            printf("%d ", i);
            
            if (i % 2 == 0) {
                even_count++;
                printf("(Par) ");
            } else {
                odd_count++;
                printf("(Ímpar) ");
            }
            
            if (is_prime(i)) {
                prime_count++;
                printf("(Primo)");
            }
            
            printf("\n");
        }
        
        printf("\nQuantidade de números pares: %d\n", even_count);
        printf("Quantidade de números ímpares: %d\n", odd_count);
        printf("Quantidade de números primos: %d\n", prime_count);
        
        printf("\nDeseja calcular novamente? (1 para sim, 0 para sair): ");
        scanf("%d", &choice);
    } while (choice == 1);
    
    printf("Programa encerrado.\n");
    
    return 0;
}