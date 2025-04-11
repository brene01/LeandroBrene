#include <stdio.h>

int main () {
    int numero;
    int soma=0;
    
    printf("Digite números inteiros (0 para sair):\n");
    
    do{
        scanf("%d", &numero);
        soma +=numero;
    } while(numero!=0);
    
    printf("A soma dos números digitados é: %d\n", soma);
    return 0;
}
