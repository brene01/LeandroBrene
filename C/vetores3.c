// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Lendo o primeiro vetor\n");
    scanf("%d", &n);
    int vet1[n],vet2[n],soma[n];
    for(int i=0;i<n;i++){
        printf("Digite o %d elemento do primeiro vetor:\n",i+1);
        scanf("%d",&vet1[i]);
}
printf("Lendo o segundo vetor\n");
for(int i=0;i<n; i++){
        printf("Digite o %d elemento do segundo vetor:\n",i+1);
        scanf("%d",&vet2[i]);
}
printf("Somando...");
for (int i=0; i<n; i++){
        soma[i] = vet1[i] + vet2[i];
}
printf("Imprimindo...");
for (int i=0; i<n; i++){
        printf("%d\t", soma[i]);
}
return(0);
}
