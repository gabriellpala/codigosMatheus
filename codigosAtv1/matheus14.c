#include <stdio.h>


int main(){
	double peso,altura,result;
	printf("digite o peso(kg) e a altura(m): ");
	scanf("%lf%lf",&peso,&altura);
	
	result = peso / (altura*altura);
	
	if(result >= 40){
		printf("Obeso morbido");
	}else if(result >= 30){
		printf("Obeso");
	}else if(result >= 25){
		printf("Sobrepeso");	
	}else if(result >= 20){
		printf("Peso normal");
	}else{
		printf("Abaixo do peso");
	}
}
	


