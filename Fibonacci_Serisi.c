#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	  
	int n,i,a=1,b=1,c=0;
	printf("Fibonacci serisinin kac elemanini gormek istediginizi giriniz : ");
	scanf("%d",&n);
	
	printf("%d ",a);
	printf("%d ",b);
	
	i=1;
	while(i<=n-2)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
		i++;
	}
	return 0;
}
