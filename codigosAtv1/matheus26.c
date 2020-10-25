#include <stdio.h>

int main(){
	
	double altFreitas=1.50,altRusso=1.40;
	int tempo=0;

	
	while(1){
	altFreitas+=0.01;
	altRusso +=0.02;
	tempo++;
	
	if(altRusso > altFreitas){
		break;
	}
	
	
	}
	printf("demorara %d anos",tempo);
}
	
	
	


