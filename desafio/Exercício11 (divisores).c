#include <stdio.h>

void imprimirDivisores(int numero) {
    printf("Os divisores do n�mero %d s�o: ", numero);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int numero;
    printf("Digite um n�mero positivo: ");
    scanf("%d", &numero);

    imprimirDivisores(numero);

    return 0;
}
