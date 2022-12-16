#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a,b,c;
	printf("sirasiyle a,b ve c sayilarini giriniz\n");
	scanf("%d" ,&a);
	scanf("%d" ,&b);
	scanf("%d" ,&c);

	if(a>b && a>c)
	{
		printf("en buyuk sayi a");
	}
	if(b>a && b>c)
	{
		printf("en buyuk sayi b");
	}
	if(c>a && c>b)
	{
		printf("en buyuk sayi c");
	}

	
	return 0;
}
