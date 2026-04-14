// 10. Converter um inteiro informado menor que 32 para sua representação em binário

#include <stdio.h>

int main() {
    int b1, b2, b3, b4, b5, b6;
    int inteiro, binario;
    printf("Digite um número inteiro menor que 32:\\> ");
    scanf("%i", &inteiro);
    
    b6 = inteiro % 2;
    b5 = (inteiro/2) % 2;
    b4 = (inteiro/4) % 2;
    b3 = (inteiro/8) % 2;
    b2 = (inteiro/16) % 2;
    b1 = (inteiro/32) % 2;

    binario = (b1 * 100000) + (b2 * 10000) + (b3 * 1000) + (b4 * 100) + (b5 * 10) + (b6 * 1);
    printf("O binário é: %06i", binario);
    
    return 0;
}