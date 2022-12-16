#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sayi1,sayi2,toplam;
	
	printf("sayi1'i giriniz");
	scanf("%d" ,&sayi1);
	
	printf("sayi2'yi giriniz");
	scanf("%d" ,&sayi2);
	
	toplam=sayi1+sayi2;
	
	if(sayi1<sayi2)
	{
		printf("%d" ,toplam);
	}
	else
	{
		printf("tekrar deneyiniz");
	}
	
	
	return 0;
}
