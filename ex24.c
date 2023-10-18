#include <stdio.h>

int main() {
    int numero_aluno, numero_aluno_mais_baixo, numero_aluno_mais_alto;
    float altura, altura_mais_baixa, altura_mais_alta;

    printf("Digite o número do aluno 1: ");
    scanf("%d", &numero_aluno);
    printf("Digite a altura do aluno 1 (em metros): ");
    scanf("%f", &altura);

    numero_aluno_mais_baixo = numero_aluno;
    numero_aluno_mais_alto = numero_aluno;
    altura_mais_baixa = altura;
    altura_mais_alta = altura;

    for (int i = 2; i <= 10; i++) {
        printf("Digite o número do aluno %d: ", i);
        scanf("%d", &numero_aluno);
        printf("Digite a altura do aluno %d (em metros): ", i);
        scanf("%f", &altura);

        if (altura < altura_mais_baixa) {
            altura_mais_baixa = altura;
            numero_aluno_mais_baixo = numero_aluno;
        }

        if (altura > altura_mais_alta) {
            altura_mais_alta = altura;
            numero_aluno_mais_alto = numero_aluno;
        }
    }

    printf("Aluno mais baixo: Número %d, Altura %.2f metros\n", numero_aluno_mais_baixo, altura_mais_baixa);
    printf("Aluno mais alto: Número %d, Altura %.2f metros\n", numero_aluno_mais_alto, altura_mais_alta);

    return 0;
}
