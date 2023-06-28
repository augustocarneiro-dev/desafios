#include <stdio.h>

int calcularSomaPares(int a, int b) {
    int soma = 0;

    if (a % 2 != 0) {
        a++;
    }

    for (int i = a; i <= b; i += 2) {
        soma += i;
    }

    return soma;
}

int main() {
    int num1, num2;
    printf("Digite o primeiro número (menor): ");
    scanf("%d", &num1);
    printf("Digite o segundo número (maior): ");
    scanf("%d", &num2);

    int somaPares = calcularSomaPares(num1, num2);
    printf("A soma dos números pares entre %d e %d é: %d\n", num1, num2, somaPares);

    return 0;
}
