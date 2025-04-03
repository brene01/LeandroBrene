#include <stdio.h>
int main(){
	int num, i;
	
	printf("Digite um numero para ver sua tabuada: ");
	scanf("%d", &num);
	
	printf("==============================\n");
	printf("	Tabuada do %d\n", num);
	printf("==============================\n");
	
	for (i= 0; i<=10; i++){
		printf("| %d x %d = %d |\n", num, i, num * i);
	}
	
	printf("==============================\n");
			
	return 0;
}
