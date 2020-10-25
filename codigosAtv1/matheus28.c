#include <stdio.h>

int main(){
	
	int idade,qtd=0;
	double media,soma=0;

	while(1){
	printf("digite a idade %d:\n",(qtd+1));
	scanf("%d",&idade);
	
	if(idade < 0){
		break;
	}
	qtd++;
	soma+=(double)idade;
	}
	media = soma/qtd;
	printf("media das idades: %.2lf",media);
}
	
	
	


