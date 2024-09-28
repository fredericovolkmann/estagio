#include <stdio.h>

int main() {
    int num, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    
    if (num == 0 || num == 1) {
        printf("%d pertence a sequencia de Fibonacci.\n", num);
        return 0;
    }

    
    while (nextTerm <= num) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        if (nextTerm == num) {
            printf("%d pertence a sequencia de Fibonacci.\n", num);
            return 0;
        }
    }

    printf("%d nao pertence a sequencia de Fibonacci.\n", num);

    return 0;
}