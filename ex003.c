// 3. Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.

#include <stdio.h>
#define PI 3.14

int main() {
    float raio;
    printf("Digite o tamanho do raio da circunferência:\\> ");
    scanf("%f", &raio);
    float area = PI * (raio * raio);
    float perimetro = 2 * PI * raio;
    printf("Dado o raio %.1f, a área da circunferência é %.1f, e o perímetro é %.1f\n", raio, area, perimetro);
    return 0;
}