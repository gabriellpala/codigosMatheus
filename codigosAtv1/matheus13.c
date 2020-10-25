#include<stdio.h>
#include<string.h>

int main(){

	char timeUm[20], timeDois[20];
	int  pUm, pDois;
	
	
	printf("Nome do primeiro time: ");
	setbuf(stdin, NULL);
	gets(timeUm);
	
	printf("Saldo de gols: ");
	scanf("%d", &pUm);
	
	printf("Nome do segundo time: ");
	setbuf(stdin, NULL);
	gets(timeDois);
	
	printf("Saldo de gols: ");
	scanf("%d", &pDois);
	
	printf("\n");
	if(pUm > pDois) {
		printf("Time %s: 3\n", timeUm);
		printf("Time %s: 0 ", timeDois);
	
	}else if(pDois > pUm){
		printf("Time %s: 0\n", timeUm);
		printf("Time %s: 3 ", timeDois);
	}
	else{
		printf("Time %s: 1 \n", timeUm);
		printf("Time %s: 1 ", timeDois);
	}
}
