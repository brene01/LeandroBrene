#include <stdio.h>
#include <stdlib.h>

int main() {
    int l1,l2,l3;
    printf("Digite o lado 1 do triangulo ?");
    scanf("%d",&l1);
    printf("Digite o lado 2 do triangulo ?");
    scanf("%d",&l2);
    printf("Digite o lado 3 do triangulo ?");
    scanf("%d",&l3);
    if(l1==l2 && l2==l3)
        printf("O triangulo é equilátero\n");
    else if(l1 !=l2 && l1 != l3 && l2 != l3)
        printf("O triangulo é Escaleno\n");
    else
        printf("O trinagulo é Isósceles\n");
    
        
    
    
    
}
