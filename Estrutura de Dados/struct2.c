// Online C compiler to run C program online
#include <stdio.h>
typedef struct{
    int id;
    char marca[30];
    char modelo[30];
    int ano;
    float tanque;
    float consumo;
}carro;

  carro cadastrar(void){
        carro c;
        printf("\nID: ");
        scanf("%d",&c.id);
        printf("\nMarca: ");
        scanf("%29s",c.marca);
        printf("\nModelo: ");
        scanf("%29s",c.modelo);
        printf("\nAno: ");
        scanf("%d",&c.ano);
        printf("\nTanque(Litros): ");
        scanf("%f",&c.tanque);
        printf("\nConsumo: ");
        scanf("%f",&c.consumo);
        
        return c;
    }
     void imprimir(carro c){
        printf("ID: %d | Marca: %s | Modelo: %s | Ano: %d\n", c.id, c.marca, c.modelo, c.ano);
        printf("Tanque: %.1f | Consumo: %.1f | Autonomia: %.1f\n",c.tanque, c.consumo, c.tanque*c.consumo);
    }
    
int main(void){
    int n;
    printf("\nQuantos carros serão cadastrados? ");
    scanf("%d",&n);
    carro veiculos[n];
    for(int i=0;i<n;i++){
        printf("\n******CADASTRO DO CARRO %d******", i+1);
        veiculos[i]=cadastrar();
    }
    printf("\n****** Lista de Carros e Autonomia ******");
    for(int i=0;i<n;i++){
        imprimir(veiculos[i]);
    }
    
return(0);
}
