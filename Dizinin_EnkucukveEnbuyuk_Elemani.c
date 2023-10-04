#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,i=0,j;
	
	printf("Dizinin eleman sayisini giriniz : ");
	scanf("%d",&n);
	
	int dizi[n];
	int *p=&dizi[0];
	
	for( ; p!=dizi+n ; p++)
	{
		
		printf("Dizinin %d. elemanini giriniz : ",++i);
		scanf("%d",p);
	}
	p--;
    
    int enKucuk=dizi[0];
    
    for(; p>=dizi ; p--)
	{
    	 if(*p<=enKucuk)
    	 {
    	 	enKucuk=*p;
		 }
	}
	
	int enBuyuk=dizi[0];
	
	for( ; p!=dizi+n ; p++)
	{
		 if(*p>=enBuyuk)
    	 {
    	 	enBuyuk=*p;
		 }
		
	}
	
	printf("Girmis oldugunuz sayilarin en buyugu : %d --- en kucugu : %d ",enBuyuk,enKucuk);
	return 0;
}
