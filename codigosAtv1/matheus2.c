#include <stdio.h>

int main(){
	
	double mbps,kbps;
	printf("digite um valor em MBPS: ");
	scanf("%lf",&mbps);
	
	kbps = (mbps*1000);
	
	printf("%.0lf MBPS = %.0lf KBPS",mbps,kbps);
}
