#include <stdio.h>

int main(){
    int i, idade;
    int somaIdades = 0, pessoas1 = 0, pessoas2 = 0, pessoas3 = 0;
    float peso, altura, mediaIdades, porcentagem;
    for(i = 0; i < 10; i++){
        printf("Digite a idade da %d pessoa: ", i + 1);
        scanf("%d", &idade);
        printf("Digite o peso da %d pessoa: (em kg) ", i + 1);
        scanf("%f", &peso);
        printf("Digite a altura da %d pessoa: (em metros) ", i + 1);
        scanf("%f", &altura);

        somaIdades += idade;

        if(peso > 80 && altura < 1.50){
            pessoas1 += 1;
        }else if(altura > 1.90){
            pessoas2 += 1;
            if(idade >= 10 && idade <= 30){
                pessoas3 += 1;
            }
        }
    }
    mediaIdades = somaIdades/10;
    porcentagem = (pessoas3 * 100)/pessoas2;
    
    printf("Media das idades das 10 pessoas: %.2f\n", mediaIdades);
    printf("Quantidade de pessoas com peso superior a 80Kg e altura inferior a 1,50 metro: %d\n", pessoas1);
    printf("Porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90m: %.2f\n", porcentagem);

    return 0;
}