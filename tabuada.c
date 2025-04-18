#include <stdio.h>

void mostrartabuada(int numero) {
    for (int i = 1; i <= 10;i++){
        printf("%d x %d = %d\n", numero, i,numero*i);
    }
}

int main() {
    int num;
    printf("Digite um número para ver sua tabuada: ");
    scanf("%d",&num);
    
    mostrartabuada(num);
    return 0;
}
