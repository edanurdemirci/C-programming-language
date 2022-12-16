#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float yaricap,pi=3.14,alan;
	
	printf("Yaricap giriniz: ");
	scanf("%f" ,&yaricap);
	
	alan=pi*yaricap*yaricap;
	
	printf("Alan= %.2f" ,alan);
	
	
	
	return 0;
}
