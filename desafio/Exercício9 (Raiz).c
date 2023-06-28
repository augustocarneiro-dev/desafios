#include <stdio.h>
#include <math.h>

void calcularRaizes(float a, float b, float c) {
    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        float raiz1 = (-b + sqrt(delta)) / (2 * a);
        float raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As ra�zes s�o: %.2f e %.2f\n", raiz1, raiz2);
    } else if (delta == 0) {
        float raiz = -b / (2 * a);
        printf("A �nica raiz �: %.2f\n", raiz);
    } else {
        printf("N�o existem ra�zes reais.\n");
    }
}

int main() {
    float a, b, c;
    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    calcularRaizes(a, b, c);
    return 0;
}
