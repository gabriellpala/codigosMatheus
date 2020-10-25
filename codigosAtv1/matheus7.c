#include<stdio.h>

int main(){
	
	int verde, amarela, branca, pontos;
	
	printf("\t--- Pontuacao ---\n");
	printf("Bola Verde: 10 pontos\n");
	printf("Bola amarela: 5 pontos\n");
	printf("Bola branca: 3 pontos\n");
	printf("\n________________________________\n\n");
	
	printf("Quantidade de bolas verdes: ");
	scanf("%d", &verde);
	
	printf("Quantidade de bolas amarelas: ");
	scanf("%d", &amarela);
	
	printf("Quantidade de bolas brancas: ");
	scanf("%d", &branca);
	
	pontos = (verde * 10) + (amarela * 5) + (branca * 3);
	
	printf("\nPontucao final: %d pontos\n", pontos);

	return 0;
}
