#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso,altura,imc;
    printf("Digite o seu peso: \n");
    scanf("%f",&peso);
    printf("Digite a sua altura: \n");
    scanf("%f",&altura);
    imc = peso/(altura*altura);
    printf("Seu IMC é: %.2f\n",imc);
    if(imc>=40)
        printf("\n você possui Obesidade grau 3(mórbida)",imc);
    else if(imc>=35 && imc>=39.9)    
         printf("\nvocê possui possui Obesidade grau 2",imc);
    else if(imc>=30 && imc>=34.9)
         printf("\nvocê possui possui Obesidade grau 1",imc);
    else if(imc>=25 && imc>=29.9)
         printf("\nvocê possui possui Sobrepeso",imc);
    else if(imc>=18.6 && imc>=24.9)
         printf("\nvocê possui Peso Normal",imc);
    else
        printf("\nvocê é baixo do peso",imc);
        
