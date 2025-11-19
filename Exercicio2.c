#include "leitor.c"

int main() {
    printf("Insira um mes em number para ver a estação >> ");
    int escolha = ler_int();

    switch(escolha) {
    case 1:
    case 2:
    case 12:
        printf("Verão \n");
        break;
    case 3:
    case 4:
    case 5:
        printf("Outono \n");
        break;
    case 6:
    case 7:
    case 8:
        printf("Inverno \n");
        break;
    case 9:
    case 10:
    case 11:
        printf("Primavera \n");
        break;
    default:
        printf("Erro \n");
    }

}