#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,faktoriyel=1,sayi;
	
	printf("Faktoriyelini almak istediginiz sayiyi giriniz : ");
	scanf("%d",&n);
	
	sayi=n;
	
	while(n>=1)
	{
		faktoriyel*=n;
		n--;
	}
	printf("%d ! = %d",sayi,faktoriyel);
	return 0;
}
