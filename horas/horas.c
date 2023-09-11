#include <stdio.h>
#include <math.h>

int main() {
    float horas, minutos, segundos;

    printf("Digite a hora, separando hora e minuto por ponto: ");
    scanf("%f", &horas);
    printf("%.2f \n", horas);

    if(floor(horas) > 23 || horas - floor(horas) > 59){
        printf("numero invalido !!");
    }else{
        minutos = (floor(horas) * 60) + ((horas - floor(horas)) * 100);
        segundos = minutos * 60;

        printf("Minutos: %.2f \n", minutos);
        printf("Segundos: %.2f ", segundos);
    }

    return 0;
}