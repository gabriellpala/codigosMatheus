#include <stdio.h>

int main(){
	int X,Y;
	
	printf("digite as coordenadas:");
	scanf("%d%d",&X,&Y);
	
	if(X > 432 || X < 0 || Y < 0 || Y > 468){
		printf("fora");
	}else{
		printf("dentro");
	}
}
	


