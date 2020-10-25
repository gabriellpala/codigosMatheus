#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int numA, n, cont = 0;
	
	srand(time(NULL));
	numA = rand()%20; //0-19
	
	printf("Escolha um numero entre 0 e 19\n\n");
	while(1){
		printf("Informe um numero: ");
		scanf("%d",&n);
		cont++;
				
		if(n == numA) break;
	}
	printf("\n_________________________________\n");
	printf("Quantidade de tentativas: %d\n", cont);
	
	getch();
	return 0;
}
