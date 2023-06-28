#include <stdio.h>

int verificarQuadradoRetangulo(int ladoB, int ladoH) {
    if (ladoB == ladoH) {
        return 1; // É um quadrado
    } else {
        return 0; // É um retângulo
    }
}

int main() {
    int b, h;
    printf("Digite a medida da base (b): ");
    scanf("%d", &b);
    printf("Digite a medida da altura (h): ");
    scanf("%d", &h);
    int resultado = verificarQuadradoRetangulo(b, h);
    if (resultado == 1) {
        printf("É um quadrado.\n");
    } else {
        printf("É um retângulo.\n");
    }
    return 0;
}
