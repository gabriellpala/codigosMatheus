#include<stdio.h>

int main(){
	
	int n, i, cont = 0;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		if(n % i == 0)
			cont += 1;
	}
	
	if(cont == 2) printf("O numero %d eh primo", n);
	else printf("O numero %d nao eh primo", n);
	
	return 0;
}
