#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int C,F;
	printf("F degerini giriniz: ");
	scanf("%d" ,&F);
	
    C=(F-32)/(1.8);
		
    printf("C= %d" ,C);
	

	return 0;
}
