#include "leitor.c"

int main() {
    printf("  1 = Sul \n  2 = Sudeste \n  3 = Centro-Oeste \n  4 = Nordeste \n  5 = Norte \n ");
    printf("Escolha a regiao que mora >> ");
    int escolha = ler_int();

    switch(escolha) {
        case 1:
            printf("Regiao Sul R$5,00 de frete \n");
            break;
        case 2:
            printf("Regiao Sudeste R$5,00 de frete \n");
            break;
        case 3:
            printf("Regiao Centro-Oeste: R$ 7,50 de frete \n");
            break;
        case 4:
            printf("Regiao Nordeste: R$ 12,50 de frete \n");
            break;
        case 5:
            printf("Regiao Norte: R$ 15,00 de frete \n");
            break;
        default:
            printf("Regiao ou numero invalido\n");
    }

    return 0;
}