#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sicaklik;
	printf("sicaklik giriniz: ");
	scanf("%d" ,&sicaklik);
	
	if(sicaklik>=0)
	{
		printf("donma noktasinin ustunde");
	}
	else
	{
		printf("donma noktasinin altinda");
	}
	
	
	return 0;
}
