#include <stdio.h>

int main(){
    int a, b, c;
    int maior, meio, menor, opcao;
    maior = menor = meio = 0;

    printf("Digite tres numeros separados por espacos: ");
    scanf("%d" "%d" "%d", &a, &b, &c);

    printf("Escolha uma opção: \n");
    printf("1 - Mostre os numeros em ordem crescente\n");
    printf("2 - Mostre os numeros em ordem decrescente\n");
    printf("3 - Mostre o menor numero entre os demais\n");
    scanf("%d", &opcao);

    if(a > b){
        if(a > c){
            maior = a;
            if(b > c){
                meio = b;
                menor = c;
            }else{
                meio = c;
                menor = b;
            }
        }else{
            maior = c;
            meio = a;
            menor = b;
        }
    }else{
        if(b > c){
            maior = b;
            if(c > a){
                menor = a;
                meio = c;
            }
            else{
                menor = c;
                meio = a;
            }
        }else{
            maior = c;
            meio = b;
            menor = a;
        }
    }

    switch (opcao)
    {
    case 1:
        printf("Ordem crescente: %d - %d - %d", menor, meio, maior);
        break;
    
    case 2:
        printf("Ordem descrescente: %d - %d - %d", maior, meio, menor);
        break;

    case 3:
        printf("Menor numero entre os outros: %d - %d - %d", meio, menor, maior);
        break;

    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}