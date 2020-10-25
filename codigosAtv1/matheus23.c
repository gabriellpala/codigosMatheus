#include<stdio.h>

int main(){
	
	int num, expoente, potencia = 1, i;
	
	printf("Informe um numero inteiro(base): ");
	scanf("%d", &num);
	
	printf("Informe um expoente qualquer: ");
	scanf("%d", &expoente);
	
	for(i=0; i<expoente; i++)
		potencia *= num;
	
	
	printf("\n%d elevado a %d eh igual a %d\n", num, expoente, potencia);
	
	return 0;
}
