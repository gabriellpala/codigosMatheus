#include<stdio.h>

int main(){
	
	int periodo, s, m;
	int menorSaldo, i=0;
	
	scanf("%d", &periodo); 
	
	scanf("%d", &s);
	
	menorSaldo = s;
	
	while(i < periodo){ 
		scanf("%d", &m);
		
		if(m > 0) 
			s += m;
		else if(m < 0) 
			s -= -(m);

		if(s < menorSaldo) 
			menorSaldo = s;
			
		i++;	
	}
	
	printf("%d\n", menorSaldo);
	return 0;
}
