#include <stdio.h>
#include <stdlib.h>

typedef struct dupla{
    int dado;
    struct dupla *elink, *dlink;
} no;

no *crialde(int n){
    no *ini=NULL, *p, *aux=NULL;
    int valor;
    for (int i=1;i<=n;i++){
        printf("\nDigite o valor %d da lista: ",i);
        scanf("%d",&valor);
        p=(no*)malloc(sizeof(no));
        p->dado=valor;
        p->elink=NULL;
        p->dlink=ini;
        if(ini != NULL)
            ini->elink=p;
        else
            aux=p;
        ini=p;
    }
    return aux;
}

void ordenalista(no *inicio){
    no *i,*j;
    int temp;
    if (inicio==NULL)return;
    for(i=inicio;i->elink !=NULL; i=i->elink){
        for(j=i->elink;j!=NULL;j=j->elink){
            if(i->dado>j->dado){
                temp=i->dado;
                i->dado=j->dado;
                j->dado=temp;
            }
        }
    }
}

void escrevelista(no *p){
    printf("\nLista:\n");
    while(p!=NULL){
        printf("%d\t",p->dado);
        p=p->elink;
    }
    printf("\n");
}

// Função que retorna a posição do valor na lista
int busca_posicao(no *inicio, int valor) {
    int pos = 1;
    no *p = inicio;
    while (p != NULL) {
        if (p->dado == valor) {
            return pos;  // valor encontrado
        }
        p = p->elink;
        pos++;
    }
    return -1;  // valor não encontrado
}

int main() {
    no *primeira;
    int n;
    printf("Criando uma lista encadeada \n");
    do{
        printf("\nEntre com o numero de nos: ");
        scanf("%d",&n);
    }while(n<0);

    primeira=crialde(n);

    if(primeira!=NULL){
        printf("\nLista original: ");
        escrevelista(primeira);

        ordenalista(primeira);
        printf("\nLista ordenada em ordem crescente: ");
        escrevelista(primeira);

        // Sistema de busca
        int chave;
        printf("\nDigite um valor para buscar na lista: ");
        scanf("%d", &chave);

        int posicao = busca_posicao(primeira, chave);
        if (posicao != -1) {
            printf("Valor %d encontrado na posicao (nó) %d da lista.\n", chave, posicao);
        } else {
            printf("Valor %d NAO encontrado na lista.\n", chave);
        }

    } else {
        printf("\nLista vazia");
    }

    return 0;
}
