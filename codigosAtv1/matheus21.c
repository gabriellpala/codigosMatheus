#include<stdio.h>

int main(){
	
	int n, aux; 
	int n1 = 0, n2 = 1, n3 = 0;
	
	printf("Digite a quantidade de numeros para ver a sequncia de Fibonacci: ");
	scanf("%d", &n);
	
	printf("%d | %d | ", n1, n2);
	aux = 3;
	
	while(aux <= n){
		
		n3 = n1 + n2;
		printf("%d | ", n3);
		n1 = n2;
		n2 = n3;
		
		aux += 1;
	}
	
	return 0;
}
