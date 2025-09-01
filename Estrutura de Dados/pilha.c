// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

#define tam 10

typedef struct{
    int vet[tam];
    int topo;
}pilhavet;

void empilha(int valor, pilhavet *p){
    if(p ->topo == tam-1){
        printf("\nPilha Cheia");
    }
    p -> topo++;
    p -> vet[p ->topo]=valor;
}

int desempilha(pilhavet*p){
    int aux;
    if(p -> topo <0){
        printf("\npilha vazia");
        exit(1);
    }
    aux = p ->vet [p-> topo];
    p -> topo--;
    return aux;
}

int main(void){
    pilhavet pilha;
    int valor;
    pilha.topo =-1;
    for (int i=0; i<tam; i++){
        printf("\nDigite o valor ser empilhado: ");
        scanf("%d",&valor);
        empilha(valor, &pilha);
    }
    for(int i=0; i<tam; i++){
        printf("\n%d", desempilha(&pilha));
        
    }
    printf("\n");
    return(0);
}
