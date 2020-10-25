#include <stdio.h>

int main(){
	double raio,altura,result;
	printf("digite o raio e a altura do cilindro:\n");
	scanf("%lf%lf",&raio,&altura);
	
	result = (2 * 3,14 * raio) * (raio + altura);
	
	printf("AREA CILINDRO = %.2lf",result);
	}

