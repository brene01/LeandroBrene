#include <stdio.h>

int main () {
    int quantidade,i;
    int numero;
    int pares=0, impares=0;
    printf("Quantos números você deseja digitar? ");
    scanf("%d", &quantidade);
    i=1;
    while (i<= quantidade){
        printf("Digite o %dº número: ",i);
        scanf("%d", &numero);
        
    if(numero %2 ==0){
        pares++;
        
    }
    else {
        impares++;
    }
    i++;
    }
    printf("\nQuantidade de números pares: %d\n", pares);
    printf("\nQuantidade de números impares: %d\n", impares);

    return 0;
}
