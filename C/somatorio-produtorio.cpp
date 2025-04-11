#include<stdio.h>
int main(){
	int qtd, i, num;
	int somatorio=0;
	long produtorio=1;
	
	printf("Digite a quantidade de números: ");
	scanf("%d",&qtd);
	printf("==================================\n");
	printf("   Leitura de %d números\n",qtd);
	printf("==================================\n");
	i=1;
	while(i<=qtd){
		printf("Digite o %d º número: ", i);
		scanf("%d", &num);
		somatorio += num;
		produtorio*= num;
		i++;
	}
	printf("==================================\n");
	printf("Somatório: %d\n",somatorio);
	printf("Somatório: %ld\n",produtorio);
	printf("==================================\n");
}
