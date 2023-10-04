#include <stdio.h>
#include <stdlib.h>

// Eleman sayisi(n) ve elemanlari klavyeden girilen n adet sayiyi selection sort algoritmasi kullanarak kucukten buyuge siralayan C kodu

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Lutfen siralamak istediginiz sayi adetini giriniz : ");
	scanf("%d",&n);
	
	int dizi[n] , i ;
	
	
	for(i=0 ; i<n ; i++)
	{
		         printf("Lutfen %d. sayiyi giriniz : ",i+1);
		         scanf("%d",&dizi[i]);
	}
	
	int j , enkucuk , tutucu , tutucu2 ;
	
	for(i=0 ; i<n-1 ; i++)
	{
	             enkucuk=dizi[i+1];
		         tutucu=dizi[i];
		
		
		         for(j=i+1 ; j<n ; j++)
		         {
			
		            	 if(dizi[j]<=enkucuk)
		             	 {
			                	enkucuk=dizi[j];
			                	tutucu2=j;
			             }
			
			
		         }
		
	           	if(enkucuk<dizi[i])
	        	{
		                    	dizi[i]=enkucuk;
			                    dizi[tutucu2]=tutucu;
	         	}
	
	}
	
	printf("Girmis oldugunuz sayilarin kucukten buyuge siralanmis hali asagidaki gibidir :\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d \t",dizi[i]);
	}
	
	return 0;
}
