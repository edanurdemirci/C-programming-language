#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sayi,tersi;
	
	printf("bir sayi giriniz: ");
	scanf("%d" ,&sayi);
	
	while(sayi>0){
	
	tersi=sayi%10;
	printf("%d" ,tersi);
	sayi=sayi/10;
	
	
	
	}
	
	printf("sayinin tersten yazilmis hali: ");
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
