// 9. Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado seu raio e sua altura

#include <stdio.h>
#define PI 3.14

int main() {
    float raio, altura;
    printf("Digite o tamanho do raio e a altura da lata de óleo:\\> ");
    scanf("%f %f", &raio, &altura);
    float base = PI * (raio * raio);
    float volume = base * altura;
    printf("Dado o raio de %.1fcm, e a altura de %.1f, o volume da lata de óleo é:\n%.0f centímetros cúbicos.", raio, altura, volume);
    return 0;
}