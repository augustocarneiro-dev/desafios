#include <stdio.h>
#include <math.h>

float calcularDelta(float numA, float numB, float numC) {
    float delta = numB * numB - 4 * numA * numC;
    return delta;
}

int main() {
    float a, b, c;
    printf("Digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    float delta = calcularDelta(a, b, c);
    printf("O delta é: %.2f\n", delta);
    return 0;
}
