#include <stdio.h>
#include <math.h>

int main() {
    float gasto, total_final, parcela;
    int op, nparcelas;

    printf("Informe o total gasto: R$ ");
    scanf("%f", &gasto);

    printf("\nOpções de pagamento:\n");
    printf("1 - À vista com 10%% de desconto\n");
    printf("2 - Em 2 vezes (sem juros)\n");
    printf("3 - De 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n");

    printf("\nEscolha uma opção (1, 2 ou 3): ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            total_final = gasto * 0.9;
            printf("\nPagamento à vista com 10%% de desconto.\nTotal a pagar: R$ %.2f\n", total_final);
            break;
        case 2:
            parcela = gasto / 2;
            printf("\nPagamento em 2 vezes sem juros.\n2 parcelas de R$ %.2f\n", parcela);
            break;
        case 3:
            if (gasto <= 100) {
                printf("\nParcelamento com juros disponível apenas para compras acima de R$ 100,00.\n");
            } else {
                printf("Escolha o número de parcelas (3 a 10): ");
                scanf("%d", &nparcelas);
                if (nparcelas < 3 || nparcelas > 10) {
                    printf("\nNúmero de parcelas inválido. Deve estar entre 3 e 10.\n");
                } else {
                    float taxa = 0.03;
                    total_final = gasto * pow(1 + taxa, nparcelas);
                    parcela = total_final / nparcelas;
                    printf("\nPagamento em %d vezes com 3%% de juros ao mês.\n", nparcelas);
                    printf("Valor total com juros: R$ %.2f\n", total_final);
                    printf("Cada parcela: R$ %.2f\n", parcela);
                }
            }
            break;
        default:
            printf("\nOpção inválida!\n");
    }

    return 0;
}
