#include <stdio.h>

float calcularJuros(float c, int m, float t) {
    float juros = c * m * t;
    return juros;
}

int main() {
    float valorEmprestimo, taxaJuros;
    int meses;
    printf("Digite o valor do empr�stimo: ");
    scanf("%f", &valorEmprestimo);
    printf("Digite o n�mero de meses: ");
    scanf("%d", &meses);
    printf("Digite a taxa de juros mensal (em porcentagem): ");
    scanf("%f", &taxaJuros);
    float juros = calcularJuros(valorEmprestimo, meses, taxaJuros / 100.0);
    printf("O valor dos juros cobrados �: %.2f\n", juros);
    return 0;
}
