#include<stdio.h>
int main(){
    float av1,av2,media;
    printf("digite a nota da av1 do aluno: ");
    scanf("%f",&av1);
    printf("\ndigite a nota da av2 do aluno:");
    scanf("%f",&av2);
    media=(av1+av2)/2;
    if (media>=6){
        printf("\no aluno esta aprvado com a media %.2f",media);
    } else if (media >=4){
        printf("\no aluno esta em exame final com media %.2f",media);
    }
    else {
        printf("\no aluno esta reprovado com a media %.2f",media);
    }
}
