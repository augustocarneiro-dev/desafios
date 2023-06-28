#include <stdio.h>

int contarPares(int numA, int numB, int numC) {
    int quantidadePares = 0;

    if (numA % 2 == 0) {
        quantidadePares++;
    }

    if (numB % 2 == 0) {
        quantidadePares++;
    }

    if (numC % 2 == 0) {
        quantidadePares++;
    }

    return quantidadePares;
}

int main() {
    int a, b, c;
    printf("Digite três números: ");
    scanf("%d %d %d", &a, &b, &c);
    int pares = contarPares(a, b, c);
    printf("A quantidade de números pares é: %d\n", pares);
    return 0;
}
