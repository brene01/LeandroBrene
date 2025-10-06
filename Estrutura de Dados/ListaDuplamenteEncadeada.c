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
        printf("\n Digite o valor %d da lista: ", i);
        scanf("%d", &valor);
        p =(no*) malloc(sizeof(no));
        p->dado = valor;
        p->elink = NULL;
        p->dlink = ini;
        
        if (ini !=NULL){
            ini->elink = p;
        }
        else{
            aux = p; 
        }
        ini = p;
    }
    return aux;
}

void escrevelista(no *p){
    while(p !=NULL){
        printf("%d\t", p->dado);
        p = p->elink;
    }
}

int main(){
    no *primeira;
    int n;
    
    printf("Criando uma lista encadeada.");
    do{
        printf("\n Entre com o numero de nos: ");
        scanf("%d", &n);
    } while(n<0);
    
    primeira = crialde(n);
    
    if(primeira !=NULL){
        printf("\n Lista criada: \n");
        escrevelista(primeira);
    } else {
      printf("\n Lista Vazia"); 
    }
    return 0;
}
