#include <stdio.h>

int main(){
	
	int qtdPar=0,qtdImpar=0,lido,resp;
	double somaPar=0,somaImpar=0;
	
	while(1){
		printf("digite um valor: ");
	scanf("%d",&lido);
	
	if(lido%2 == 0){
		qtdPar++;
		somaPar+=lido;
	}else{
		qtdImpar++;
		somaImpar+=lido;
	}
	printf("deseja continuar? [sim = 1 / nao = 2]\n");
	scanf("%d",&resp);
	if(resp == 2){
		break;
	}
	}
	printf("MEDIA PARES = %.2lf\n",(somaPar/qtdPar));
	printf("MEDIA IMPARES = %.2lf\n",(somaImpar/qtdImpar));
}
	
	
	


