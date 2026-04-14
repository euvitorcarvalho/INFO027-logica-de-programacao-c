// 8. Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um valor de temperatura em Fahrenheit e exibi-lo em Celsius.

#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Digite a temperatura em Fahrenheit:\\> ");
    scanf("%f", &fahrenheit);
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    printf("Temperatura em Celsius: %.1f", celsius);
    return 0;
}