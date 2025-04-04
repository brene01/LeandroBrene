#include <stdio.h>
int main(){
	int qtd, i, num;
	
	int somatorio=0;
	
	printf("digite a quantidade de numeros: ");
	scanf("%d", &qtd);
	printf("====================================\n");
	printf("Leitura de %d numeros: \n",qtd);
	printf("====================================\n");
	for(i=1; i<=qtd; i++){
		printf("Digite o numero %d: ", i);
		scanf("%d", &num);
		somatorio+=num;
		
	}
	printf("====================================\n");
	printf("Somatorio: %d\n", somatorio);
	printf("====================================\n");
	return 0;
}
