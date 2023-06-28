#include <stdio.h>

int calcularSomaPA(int a1, int an, int n) {
    int soma = (n * (a1 + an)) / 2;
    return soma;
}

int main() {
    int a1, an, n;
    printf("Digite o primeiro elemento (a1) da P.A.: ");
    scanf("%d", &a1);
    printf("Digite o n-ésimo elemento (an) da P.A.: ");
    scanf("%d", &an);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    int soma = calcularSomaPA(a1, an, n);
    printf("A soma dos %d primeiros termos da P.A. é: %d\n", n, soma);
    return 0;
}
