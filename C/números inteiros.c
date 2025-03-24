#include <stdio.h>
int main(){
    int num1,num2,soma,sub,mult;
    float div;
    printf("Digite o valor do primeiro número: ");
    scanf("%d",&num1);
    printf("\nDigite o valor do segundo número: ");
    scanf("%d",&num2);
    soma=num1+num2;
    sub=num1-num2;
    mult=num1*num2;
    div=num1/num2;
    printf("\n***************");
    printf("\nRESULTADOS");
    printf("\n***************");
    printf("\n%d + %d = %d",num1,num2,soma);
    printf("\n%d - %d = %d",num1,num2,sub);
    printf("\n%d x %d = %d",num1,num2,mult);
    printf("\n%d / %d = %f",num1,num2,div);
}
