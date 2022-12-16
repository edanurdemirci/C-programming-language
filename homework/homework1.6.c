#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float fit,cm;
	printf("fit degerini giriniz: ");
	scanf("%f" ,&fit);
	
	cm=fit*(30.48);
	
	printf("cm degeriniz= %f" ,cm);
	
	
	
	return 0;
}
