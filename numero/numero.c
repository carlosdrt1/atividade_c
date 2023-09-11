#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Quadrado do numero: %.2f \n", pow(numero, 2));
    printf("Numero elevado ao cubo: %.2f \n", pow(numero, 3));
    printf("Raiz quadrada do numero: %.2f \n", pow(numero, (1.0/2.0)));
    printf("Raiz cubica do numero: %.2f \n", pow(numero, (1.0/3.0)));
    printf("Resto da divisão por 3: %d \n", numero % 3);

    return 0;
}