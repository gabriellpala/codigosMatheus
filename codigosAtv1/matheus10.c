#include <stdio.h>

int main(){
	
	double num1,num2;
	char operador;
	printf("digite 2 numeros e a operacao entre eles (+,-,*,/)\n");
	scanf("%lf%lf%s",&num1,&num2,&operador);
	
	switch(operador){
		case '+':
		printf("%.2lf",(num1+num2));
		break;
		
		case '-':
		printf("%.2lf",(num1-num2));
		break;
		
		case '*':
		printf("%.2lf",(num1*num2));
		break;
		
		case '/':
		printf("%.2lf",(num1/num2));
		break;
	}	
	}


