//QUESTÃO 2
#include <stdio.h>
#include <stdbool.h>



// Função para verificar se um número é da sequência de Fibonacci
bool seqFibonacci(int numero) {
	
    if (numero < 0) return false; 
    
    int fib1 = 0;
    int fib2 = 1;
    
    while (fib2 < numero) {
        int temp = fib2;
        fib2 = fib1 + fib2;
        fib1 = temp;
    }
    
    return fib2 == numero;
}

int main() {
    int num;
    
    // Solicita a entrada de um número
    printf("Digite um número: ");
    if (scanf("%d", &num) != 1) {
        printf("Número inválido.\n");
        return 1; 
    }
    
    // Verifica se o número é um número de Fibonacci e exibe o resultado
    if (seqFibonacci(num)) {
        printf("O número %d pertence a sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence a sequência de Fibonacci.\n", num);
    }
    
    return 0;
}

	
	
	

