#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso,altura,imc;
    printf("Digite o peso do paciente: \n");
    scanf("%f",&peso);
    printf("Digite a altura do paciente: \n");
    scanf("%f",&altura);
    imc = peso/(altura*altura);
    if(imc>=40)
        printf("\nO paciente com imc %.2f possui Obesidade grau 3(mórbida)",imc);
    else if(imc>=35 && imc>=39.9)    
         printf("\nO paciente com imc %.2f possui Obesidade grau 2",imc);
    else if(imc>=30 && imc>=34.9)
         printf("\nO paciente com imc %.2f possui Obesidade grau 1",imc);
    else if(imc>=25 && imc>=29.9)
         printf("\nO paciente com imc %.2f possui Sobrepeso",imc);
    else if(imc>=18.6 && imc>=24.9)
         printf("\nO paciente com imc %.2f possui Peso Normal",imc);
    else
        printf("\nO paciente com imc %.2f possui abaixo do peso",imc);
        
    
    
    
}
