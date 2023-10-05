#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		int n,i;
	
	printf("Lutfen dizinin eleman sayisini giriniz : ");
	scanf("%d",&n);
	
	int dizi[n];
	
    for(i=0;i<n;i++)
	{
    	printf("Lutfen dizinin %d. elemani giriniz : ",i+1);
    	scanf("%d",&dizi[i]);
	}
	
	int arananDeger;
	printf("Lutfen aradiginiz degeri giriniz : "),
	scanf("%d",&arananDeger);
	
	int j,x,t,enkucuk;
	
	
	//Siralama(selection sort) algoritmasi
	for(i=0;i<n-1;i++)
	{
		x=dizi[i];
		enkucuk=dizi[i+1];
		
		for(j=i+1;j<n;j++)
		{
			
			if(dizi[j]<=enkucuk)
			{
				enkucuk=dizi[j];
				t=j;
			}
		}
		
		if(enkucuk<dizi[i])
		{
			dizi[i]=enkucuk;
			dizi[t]=x;
			
		}
	}
	
	
	//Arama(Binary search) Algoritmasi
	int sagIndex,solIndex,ortanca;
	
	sagIndex=n-1;
	solIndex=0;
	
	while (sagIndex>=solIndex)
	{
		ortanca=(sagIndex+solIndex)/2;
		
		if(dizi[ortanca]<arananDeger)
		{
			solIndex=ortanca+1;
		}
		
		else if(dizi[ortanca]>arananDeger)
		{
			sagIndex=ortanca-1;
		}
		
		else if(dizi[ortanca]==arananDeger)
		{
			printf("Aradaginiz %d degeri dizide bulunmaktadir",arananDeger);
			break;
		}
		
		if(sagIndex==solIndex)
		{
			printf("Aradiginiz %d degeri maalesef dizide bulunmamaktadir.",arananDeger);
			break;
		}
		
	}
	return 0;
}
