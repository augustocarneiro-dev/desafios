#include <stdio.h>

int verificarQuadradoRetangulo(int ladoB, int ladoH) {
    if (ladoB == ladoH) {
        return 1; // � um quadrado
    } else {
        return 0; // � um ret�ngulo
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
        printf("� um quadrado.\n");
    } else {
        printf("� um ret�ngulo.\n");
    }
    return 0;
}
