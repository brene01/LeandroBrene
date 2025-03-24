#include <stdio.h>
int main(){
    printf("Segunda Aula de Programação em C");
    printf("\n******************************");
    printf("\nProf. Alessandro Calin");
    printf("\n******************************");
    printf("\nCadastrando Alunos");
    char nome[20];
    int idade;
    printf("\nDigite o nome do Aluno: ");
    scanf("%20s",&nome);
    printf("\nDigite a idade do Aluno: ");
    scanf("%d",&idade);
    printf("\n_________________________");
    printf("\nRelatório de Alunos");
    printf("\n_________________________");
    printf("\nNome: %s",nome);
    printf("\nIdade: %d",idade);
}
