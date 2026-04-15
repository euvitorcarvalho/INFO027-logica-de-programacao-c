// 4. Dado os três lados de um triângulo determinar o perímetro do mesmo.

#include <stdio.h>

int main() {
    int lado1, lado2, lado3;
    printf("Digite o tamanho dos lados do triângulo:\\> ");
    scanf("%i %i %i", &lado1, &lado2, &lado3);
    int perimetro = lado1 + lado2 + lado3;
    printf("Dado os lados %i, %i, e %i do triângulo, o perímetro é %i\n", lado1, lado2, lado3, perimetro);
    return 0;
}