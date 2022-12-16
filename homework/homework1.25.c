#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	
	int sayi1,sayi2,i,hcf;
	
	printf("sayi1 i girin: ");
	scanf("%d" , &sayi1);
	
	printf("sayi2yi girin: ");
	scanf("%d" ,&sayi2);
	
	for(i=1;i<=sayi1 && i<=sayi2 ; i++){
		
		if(sayi1%i==0 && sayi2%2==0)
			hcf=i;
		
			
		}
		
		printf("%d ve %d hcf: %d" ,sayi1,sayi2,hcf);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
