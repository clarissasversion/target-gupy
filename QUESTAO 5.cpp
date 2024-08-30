#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100


void reverterPalavra(char *palavra, char *resultado) {
    int comprimento = strlen(palavra);
    for (int i = comprimento - 1; i >= 0; i--) {
        resultado[comprimento - 1 - i] = palavra[i];
    }
    resultado[comprimento] = '\0';
}
int main() {

    char palavra[MAX_LENGTH];
    char resultado[MAX_LENGTH];
    
    // Solicita ao usuário a entrada da palavra
    printf("Digite uma palavra: ");
    if (fgets(palavra, MAX_LENGTH, stdin) == NULL) {
        fprintf(stderr, "Palavra inválida.\n");
        return 1;
    }
    

    size_t comprimento = strlen(palavra);
    if (comprimento > 0 && palavra[comprimento - 1] == '\n') {
        palavra[comprimento - 1] = '\0';
    }
    
    // Reverte a palavra
    reverterPalavra(palavra, resultado);
    
    // Exibe o resultado
    printf("Palavra revertida: %s\n", resultado);
    
    return 0;
}

