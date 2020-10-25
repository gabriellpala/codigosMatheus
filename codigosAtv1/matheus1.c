#include<stdio.h>

int main(){
	
	double cotacao, qtd;
	
	printf("Cotacao atual do dolar: US$");
	scanf("%lf", &cotacao);
	
	printf("\nInsira a quantidade de dinheiro disponivel para conversao: R$");
	scanf("%lf", &qtd);
	
	printf("\n\nReal brasileiro => Dolar americano: R$%.2lf\n", cotacao * qtd);
	
	return 0;
}
