#include<stdio.h>

int main(){
	
	int tempo, kmLitro;
    double velMedia, distancia, qtdCombustivel;

	printf("Tempo gasto de viagem(horas): ");
	scanf("%d", &tempo);
	
	printf("Kilometragem/L(Km): ");
	scanf("%d", &kmLitro);

	printf("Velocidade media(Km): ");
	scanf("%lf", &velMedia);
	

    distancia = (double)tempo * velMedia;
    qtdCombustivel = distancia / kmLitro;

    printf("\nDistancia percorrida: %.1lf Km\n", distancia);
	printf("Quantidade de litros consumidos: %.2lf Litros\n", qtdCombustivel);

	return 0;
}
