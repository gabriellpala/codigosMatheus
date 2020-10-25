#include<stdio.h>

int main(){
	
	int idade;
	char op;
	
	while(1){
		printf("Insira sua idade: ");
		scanf("%d", &idade);
		
		if(idade > 18 && idade < 65){
			
			printf("Eleitor obrigatorio\n");
			
		}else if(idade > 16 && idade < 18 || idade > 65){
			
			printf("Eleitor facultativo\n");
			
		}else{
			
			printf("Nao eleitor\n");
			
		}
		printf("\nDeseja continuar?[s/n] ");
		scanf(" %c", &op);
		
		if(op == 'n') break;
	}
	return 0;
	
	
	
	/*. Crie um programa em C que leia a idade de uma pessoa e informe a sua classe eleitoral:
- não eleitor (abaixo de 16 anos);
- eleitor obrigatório (entre a faixa de 18 e menor de 65 anos);
- eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive)*/
}
