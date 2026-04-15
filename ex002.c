// 2. Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo.

#include <stdio.h>

int main() {
    int lado;
    printf("Digite o tamanho do lado do quadrado:\\> ");
    scanf("%i", &lado);
    int area = lado * lado;
    int perimetro = 4 * lado;
    printf("Dado o lado %i, a área do quadrado é %i, e o perímetro é %i\n", lado, area, perimetro);
    return 0;
}