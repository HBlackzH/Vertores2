#include <stdio.h>

int main() {
    int vetor[20];
    int vetorSemRepeticao[20]; 
    int tamanhoSemRepeticao = 0;

    printf("Digite 20 números inteiros:\n");
    for (int i = 0; i < 20; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);


        int repetido = 0;
        for (int j = 0; j < tamanhoSemRepeticao; j++) {
            if (vetor[i] == vetorSemRepeticao[j]) {
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            vetorSemRepeticao[tamanhoSemRepeticao] = vetor[i];
            tamanhoSemRepeticao++;
        }
    }

    printf("Vetor sem elementos repetidos:\n");
    for (int i = 0; i < tamanhoSemRepeticao; i++) {
        printf("%d ", vetorSemRepeticao[i]);
    }

    return 0;
}
