#include <stdio.h>
typedef struct{
    char nome[40];
    int idade;
    float renda;
}contribuinte;
int main(){
    int n;
    printf("Digite a quantidade de contribuintes:\n");
    scanf("%d",&n);
    contribuinte pessoas[n];
    int menor=0;
    int isentas=0;
    for (int i=0;i<n;i++){
        printf("\n****** Contribuinte %d********", i+1);
        printf("\nNome: ");
        scanf("%39s", pessoas[i].nome);
        printf("\nIdade: ");
        scanf("%d", &pessoas[i].idade);
        printf("\nRenda Anual: ");
        scanf("%f", &pessoas[i].renda);
    if (pessoas[i].idade<18)
        menor++;
    if (pessoas[i].renda<= 28559.70)
        isentas++;
    }
    printf("\n********************Resultados**********************");
    printf("\nTemos %d pessoas menores de idade", menor);
    printf("\nTemos %d contribuintes isentos de IR", isentas);
    printf("\n");
    printf("\n********************DADOS PESSOAIS*******************");
    printf("\n");
    for(int i=0;i<n;i++){
        printf("-----Pessoa %d ----- ",i+1);
        printf("Nome:%s\n", pessoas[i].nome);
        printf("Idade:%d\n", pessoas[i].idade);
        printf("Renda:%.2f\n", pessoas[i].renda);
    }
    return 0;
}
