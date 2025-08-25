 Online C compiler to run C program online
#include stdio.h
typedef struct{
    char nome[40];
    int idade;
    float renda;
}contribuinte;
int main(){
    int n;
    printf(Digite a quantidade de contribuintesn);
    scanf(%d,&n);
    contribuinte pessoas[n];
    int menor=0;
    int isentas=0;
    for (int i=0;in;i++){
        printf(n Contribuinte %d, i+1);
        printf(nNome );
        scanf(%39s, pessoas[i].nome);
        printf(nIdade );
        scanf(%d, pessoas[i].idade);
        printf(nRenda Anual );
        scanf(%f, pessoas[i].renda);
    if (pessoas[i].idade18)
        menor++;
    if (pessoas[i].renda= 28559.70)
        isentas++;
    }
}