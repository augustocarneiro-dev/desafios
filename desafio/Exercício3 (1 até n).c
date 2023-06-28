#include <stdio.h>

void imprimirNumeros(int num) {
    for (int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    imprimirNumeros(n);
    return 0;
}
