#include <stdio.h>

int calcularSomaMaiorMenor(int a, int b, int c) {
    int maior = a;
    int menor = a;

    if (b > maior) {
        maior = b;
    } else if (b < menor) {
        menor = b;
    }

    if (c > maior) {
        maior = c;
    } else if (c < menor) {
        menor = c;
    }

    return maior + menor;
}

int main() {
    int num1, num2, num3;
    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int soma = calcularSomaMaiorMenor(num1, num2, num3);
    printf("A soma do maior e do menor número é: %d\n", soma);
    return 0;
}
