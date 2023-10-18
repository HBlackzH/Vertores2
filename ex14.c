#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("Os vetores nas posições %d e %d são iguais: %d\n", i, j, vetor[i]);
            }
        }
    }

    return 0;
}
