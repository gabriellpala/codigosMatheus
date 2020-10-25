#include <stdio.h>

int main(){
	
	int i;
		printf("digite um numero para saber se ele eh par ou impar:\n");
		scanf("%d",&i);
		
		if(i%2 == 0){
			printf("%d eh PAR\n",i);
		}else{
			printf("%d eh IMPAR\n",i);
		}	
	}


