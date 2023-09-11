#include <stdio.h>

int main(){
    int i, fatorial, num;
    while(1){ //valor 1 pra ser um loop infinito até 0 ser digitado
        fatorial = 1;

        printf("Digite um numero (ou 0 para sair): ");
        scanf("%d", &num);

        if(num == 0) {
            printf("Numero 0 digitado, fim da execucao\n");
            break;
        }else if(num < 0){
            printf("Numero negativo digitado \n");
        }else{
            printf("Numero digitado: %d \n", num);
        for (i = 1; i <= num; i++){
            fatorial = fatorial * i;
        }
        printf("Fatorial do numero: %d \n", fatorial);
        }
    }

    return 0;
}