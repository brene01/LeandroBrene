// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char nome[5][30];
    for (int i=0; i<5; i++){
        printf("Digite o nome da %d pessoa:\n", i+1);
        fgets(nome[i],30,stdin);
        
    }
    for (int i=0;i<5;i++){
            printf("%s", nome[i]);
    }
    return 0;
}
