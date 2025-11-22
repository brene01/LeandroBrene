#include <stdio.h>
#include <stdlib.h>

typedef struct dupla {
    int dado;
    struct dupla *elink, *dlink;
} no;

no* push(no *topo, int valor){
    no *p = (no*) malloc(sizeof(no));
    p->dado = valor;
    p->elink = topo;
    p->dlink = NULL;
    if (topo != NULL)
        topo->dlink = p;
    return p;
}

no* pop(no *topo, int *valor){
    if(topo == NULL){
        printf("\nPilha vazia");
        return NULL;
    }
    no *temp = topo;
    *valor = topo->dado;
    topo = topo->elink;
    if(topo != NULL)
        topo->dlink = NULL;
    free(temp);
    return topo;
}

void imprimipilha(no *topo){
    no *p = topo;
    printf("\nPilha (topo -> base): ");
    while(p != NULL){
        printf("%d ", p->dado);
        p = p->elink;
    }
    printf("\n");
}

int main(){
    no *topo = NULL;
    int n, valor;

    printf("Criando uma pilha.\n");
    printf("\nQuantos valores deseja empilhar? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("Digite o valor %d: ", i);
        scanf("%d", &valor);
        topo = push(topo, valor);
    }

    imprimipilha(topo);

    printf("\nDesempilhando tudo:\n");
    while(topo != NULL){
        topo = pop(topo, &valor);
        printf("Desempilhado: %d\n", valor);
    }

    return 0;
}
