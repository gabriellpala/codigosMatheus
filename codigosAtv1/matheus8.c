#include <stdio.h>

int main(){
	
	double custoFabrica,result;
	printf("digite o custo de fabrica do veículo:\n");
	scanf("%lf",&custoFabrica);
	
	result = custoFabrica + (custoFabrica*0.42) + (custoFabrica*0.25);
	printf("O preco do carro aos consumidores sera de %.2lf reais",result);
	}


