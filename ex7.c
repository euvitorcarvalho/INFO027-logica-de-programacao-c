// 7. Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.

#include <stdio.h>

int main() {
    int diasTotais;
    printf("Digite sua idade em dias:\\> ");
    scanf("%i", &diasTotais);

    int anos = diasTotais / 365;
    int restoDias = diasTotais % 365;
    int meses = restoDias / 30;
    int dias = restoDias % 30;

    printf("Sua idade em dias é: %i\nVocê tem %i anos, %i meses e %i dias\n", diasTotais, anos, meses, dias);
    return 0;
}