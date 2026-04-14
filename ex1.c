// 1. Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro.

#include <stdio.h>

int main () {
    int base, altura;
    printf("Digite a Base e a Altura do retângulo:/> ");
    scanf("%i %i", &base, &altura);
    int area = base * altura;
    int perimetro = (base + altura) * 2;
    printf("Considerando a base %i e a altura %i, a área do retângulo é %i e o perímetro é %i", base, altura, area, perimetro);
    
    return 0;
}