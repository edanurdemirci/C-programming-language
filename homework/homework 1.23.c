#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	int n,r,toplam=0,i;
	printf("bir sayi giriniz: ");
	scanf("%d" ,&n);
	i=n;
	
	while(n>0)
	{
		r=n%10;
		toplam=(toplam*10)+r;
		n=n/10;
	}
	if(i==toplam)
	printf("polindromdur");
	else
	printf("polindrom degildir");
	
	
	
	
	return 0;
}
