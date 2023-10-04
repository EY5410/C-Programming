#include <stdio.h>
#include <stdlib.h>


//Klavyeden girilen n adet sayinin ebob ve ekokunu bulan C kodu

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Ebob ve Ekokunu hesaplamak istediginiz sayi adetini giriniz : ");
	scanf("%d",&n);
	
	int dizi[n] , i ;
	
	for(i=0;i<n;i++){
		
		
		
		printf("Lutfen %d. sayiyi giriniz :",i+1);
		scanf("%d",&dizi[i]);
		
	
	}
	
	int enkucuk=dizi[0] , ebob=1 , j, carpim=1 ;
	//carpim degiskeni ileride ekoku bulmak icin kullanilmistir
	
	for(i=0 ; i<n ; i++) 
	{
	 
		if(dizi[i]<enkucuk)
		{
		
		  enkucuk=dizi[i];
		  
		}
		  
		  carpim*=dizi[i];
		  
	} 
	
    int x;
    //x degiskeni ebobun degerini gecici olarak saklamak icin kullanilmistir
    
    for(i=1;i<=enkucuk;i++)
	{
    	x=ebob;
    	 
    	for(j=0 ; j<n ; j++)
		{
    		 if(dizi[j]%i==0)
			 {
    		 	ebob=i;
			 }
			 else
			 {
			 	ebob=x;break;
			 }
		}
    	
    	
    	
	}
	
	
	int ekok=carpim/ebob;
	
	printf("Girmis oldugunuz sayilarin ebobu = %d  ekoku ise : %d",ebob,ekok);
	
	
	 
	return 0;
}
