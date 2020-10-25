#include<stdio.h>

int main(){
	
	int i, n, fat = 1;
	
	printf("Informe um numero para ver seu fatorial: ");
	scanf("%d", &n);
	
	printf("\n%d! : ", n);
	for(i=n; i>0; i--){
		fat *= i;
		printf("%d ", i);
	}
	printf("= %d\n", fat);
	
	return 0;
}
