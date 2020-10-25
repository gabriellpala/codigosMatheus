#include <stdio.h>

int main(){
	
	int num,menor,rodada=0;
	
	while(1){
		scanf("%d",&num);
		if(num == -1){
			break;
		}
		if(rodada==0){
			menor = num;
			rodada++;
		}
		if(num < menor){
			menor = num;
		}
	}
	printf("MENOR = %d\n",menor);
}
	
	
	


