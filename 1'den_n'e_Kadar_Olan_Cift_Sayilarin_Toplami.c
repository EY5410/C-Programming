#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,i=0,toplam=0;
	
	printf("Lutfen n degerini giriniz : ");
	scanf("%d",&n);
	
	a:
		if(i<=n)
		{
			toplam+=i;
			i+=2;
			goto a;
		}
	printf("1 den %d e kadar olan cift sayilarin toplami : %d",n,toplam);
	return 0;
}
