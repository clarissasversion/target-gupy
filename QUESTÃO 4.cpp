#include <stdio.h>

#define NUM_ESTADOS 5

typedef struct {
    char *estado;
    double valor;
} DadosEstado;

void calcularPorcentagens(DadosEstado dados[], int tamanho) {
    double soma = 0;
    // Calcular a soma total
    for (int i = 0; i < tamanho; i++) {
        soma += dados[i].valor;
    }

    // Calcular e mostrar as porcentagens
    for (int i = 0; i < tamanho; i++) {
        double porcentagem = (dados[i].valor / soma) * 100;
        printf("%s: %.2f%%\n", dados[i].estado, porcentagem);
    }
}

int main() {
    // Definir os dados dos estados
    DadosEstado dados[NUM_ESTADOS] = {
        {"SP", 67836.43},
        {"RJ", 36678.66},
        {"MG", 29229.88},
        {"ES", 27165.48},
        {"OUTROS", 19849.53}
    };

    calcularPorcentagens(dados, NUM_ESTADOS);

    return 0;
}

