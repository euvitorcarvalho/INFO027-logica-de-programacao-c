// 7. Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.

#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade:\\> ");
    scanf("%i", &idade);
    int idadeEmMeses = idade * 12;
    int idadeEmDias = idade * 365;
    printf("Sua idade em anos é: %i\nSua idade em meses é: %i\nSua idade em anos é: %i\n,", idade, idadeEmMeses, idadeEmDias);
    return 0;
}