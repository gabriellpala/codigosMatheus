#include <stdio.h>

int main(){
	
	int competidores,pntMin,i,aprovados=0,pont1,pont2;
	printf("digite o numero de competidores: ");
	scanf("%d",&competidores);
	printf("pontuacao minima: ");
	scanf("%d",&pntMin);

	for(i=0; i<competidores; i++){
		scanf("%d%d",&pont1,&pont2);
		
		if((pont1 + pont2) >= pntMin){
			aprovados++;
		}
	} 
	printf("APROVADOS: %d",aprovados);
}
	
	
	


