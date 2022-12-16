#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
   int sayi;
   int basamak=0;
   
   printf("basamagini bulmak istediginiz sayiyi giriniz: ");
   scanf("%d" ,&sayi);
   
   while(sayi>0){
   	
   	sayi=sayi/10;
   	basamak++;
   	
   	
   	
   }
	
	printf("basamak sayiniz: %d" ,basamak);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
