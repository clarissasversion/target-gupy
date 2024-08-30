//QUEST�O 2
#include <stdio.h>
#include <stdbool.h>



// Fun��o para verificar se um n�mero � da sequ�ncia de Fibonacci
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
    
    // Solicita a entrada de um n�mero
    printf("Digite um n�mero: ");
    if (scanf("%d", &num) != 1) {
        printf("N�mero inv�lido.\n");
        return 1; 
    }
    
    // Verifica se o n�mero � um n�mero de Fibonacci e exibe o resultado
    if (seqFibonacci(num)) {
        printf("O n�mero %d pertence a sequ�ncia de Fibonacci.\n", num);
    } else {
        printf("O n�mero %d n�o pertence a sequ�ncia de Fibonacci.\n", num);
    }
    
    return 0;
}

	
	
	

