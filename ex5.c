// 5. Ler um número inteiro e exibir o seu sucessor

#include <stdio.h>

int main() {
    int numero, sucessor;
    printf("Digite um número:\\> "); 
    scanf("%i", &numero);
    sucessor = numero + 1;
    printf("%i", sucessor);
    return 0;
}