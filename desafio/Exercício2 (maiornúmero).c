#include <stdio.h>

int encontrarMaior(int numX, int numY) {
    if (numX > numY) {
        return numX;
    } else {
        return numY;
    }
}

int main() {
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    int maior = encontrarMaior(x, y);
    printf("O maior numero e: %d\n", maior);
    return 0;
}
