#include<stdio.h>
#include<math.h>

int main(){
	
	int n = -1, raiz, quad;
	
	while(n < 0){
		printf("\nDigite um numero: ");
		scanf("%d", &n);
		
		
		if(n > 0){
			raiz = sqrt(n);
			quad = pow(n, 2);
			printf("-> Quadrado de %d: %d\n", n, quad);
			printf("-> Raiz quadrada de %d: %d\n", n, raiz);

		} else{
			printf("Digite um valor maior que zero\n");
		}
	}
	return 0;
}

