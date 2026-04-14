// 6. Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles

#include <stdio.h>

int main() {
    int numero1, numero2;
    int quociente, resto;

    printf("Digite os números:\\> ");
    scanf("%i %i", &numero1, &numero2);

    quociente = numero1 / numero2;
    resto = numero1 % numero2;
    printf("O quociente e o resto da divisão entre %i e %i é respectivamente:\n%i e %i", numero1, numero2, quociente, resto);
}