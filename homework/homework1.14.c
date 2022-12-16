#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i;
	int faktoriyel=1;
	
	printf("faktoriyel alinacak sayiyi giriniz: ");
	scanf("%d" ,&i);
	
	while (i != 0)
	{
		faktoriyel=faktoriyel*i;
		
		i--;
	}
	printf("sonucunuz: %d",faktoriyel);

	
	
	return 0;
}
