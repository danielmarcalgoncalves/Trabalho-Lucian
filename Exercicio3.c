#include <stdio.h>
#include "leitor.c"

int main() {
    float valor_total = 0;
    
    printf("OPCOES DE CARNE:\n");
    printf("1 - File de frango - R$ 15,00\n");
    printf("2 - Bisteca suina - R$ 15,00\n");
    printf("3 - Carne de panela - R$ 17,50\n");
    printf("4 - Peixe empanado - R$ 16,00\n");
    printf("5 - Carne de soja - R$ 18,00\n");
    printf("Escolha a carne: ");
    int opcao_carne = ler_int();
    
    printf("OPCOES DE ACOMPANHAMENTO:\n");
    printf("1 - Arroz e feijao - R$ 10,00\n");
    printf("2 - Arroz e fritas - R$ 11,00\n");
    printf("3 - Macarrao alho e oleo - R$ 12,00\n");
    printf("4 - Macarrao a bolonhesa - R$ 14,00\n");
    printf("Escolha acompanhamento: ");
    int opcao_acompanhamento = ler_int();
    
    printf("OPCOES DE BEBIDA:\n");
    printf("1 - Coca-Cola 200 ml - R$ 2,50\n");
    printf("2 - Suco de Laranja 200ml - R$ 4,50\n");
    printf("3 - Agua Mineral 350ml - R$ 1,50\n");
    printf("Escolha bebida: ");
    int opcao_bebida = ler_int();
    
    switch(opcao_carne) {
        case 1:
            printf("File de frango - R$ 15,00\n");
            valor_total += 15.00;
            break;
        case 2:
            printf("Bisteca suina - R$ 15,00\n");
            valor_total += 15.00;
            break;
        case 3:
            printf("Carne de panela - R$ 17,50\n");
            valor_total += 17.50;
            break;
        case 4:
            printf("Peixe empanado - R$ 16,00\n");
            valor_total += 16.00;
            break;
        case 5:
            printf("Carne de soja - R$ 18,00\n");
            valor_total += 18.00;
            break;
        default:
            printf("Opcao invalida!\n");
    }
    
    switch(opcao_acompanhamento) {
        case 1:
            printf("Arroz e feijao - R$ 10,00\n");
            valor_total += 10.00;
            break;
        case 2:
            printf("Arroz e fritas - R$ 11,00\n");
            valor_total += 11.00;
            break;
        case 3:
            printf("Macarrao alho e oleo - R$ 12,00\n");
            valor_total += 12.00;
            break;
        case 4:
            printf("Macarrao a bolonhesa - R$ 14,00\n");
            valor_total += 14.00;
            break;
        default:
            printf("Opcao invalida!\n");
    }
    
    switch(opcao_bebida) {
        case 1:
            printf("Coca-Cola 200ml - R$ 2,50\n");
            valor_total += 2.50;
            break;
        case 2:
            printf("Suco de Laranja 200ml - R$ 4,50\n");
            valor_total += 4.50;
            break;
        case 3:
            printf("Agua Mineral 350ml - R$ 1,50\n");
            valor_total += 1.50;
            break;
        default:
            printf("Opcao invalida!\n");
    }
    
    printf("VALOR TOTAL: R$ %.2f\n", valor_total);
    
    return 0;
}