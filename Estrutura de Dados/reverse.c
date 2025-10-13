// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct dupla{
    char dado;
    struct dupla *elink, *dlink;
}no;

no* crialistapalavra(char palavra[]){
    no *ini = NULL, *p;
    int i = 0;
    while (palavra[i] != '\0'){
        p= (no*)malloc(sizeof(no));
        p->dado=palavra[i];
        p->elink=ini;
        p->dlink=NULL;
        if(ini !=NULL)
            ini->dlink=p;
            ini=p;
            i++;
    }
    return ini;
}
void imprimeinversa(no *p){
    printf("\nPalavra invertida: ");
    while(p!=NULL){
        printf("%c",p->dado);
        p=p->elink;
    }
    printf("\n");
}

int main() {
    char palavra[100];
    no *lista;
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    lista=crialistapalavra(palavra);
    if(lista!=NULL)
        imprimeinversa(lista);
        
    else
        printf("\nLista vazia\n");
    
    
    

    return 0;
}
