#include<stdio.h>

int main(){
	
	double m;
	int seg = 0;
	
	printf("Informe massa do material radioavito: ");
	scanf("%lf", &m);
	
	while(m >= 1.45){
		m -= (m * 0.13);
		seg += 20;
		
		printf("Massa: %.2f - Segundos: %d\n", m, seg);
		_sleep(500);
	}
	printf("\nForam gastos %d segundos para a perca da massa.\n", seg);
	
	return 0;
}
