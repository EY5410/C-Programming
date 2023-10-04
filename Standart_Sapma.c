#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Eleman sayisi ve elemanlari klavyeden girilen n adet sayinin standart sapmasini hesaplayan C kodu

int main(int argc, char *argv[]) {
	
	
	int n;
	
	printf("Standart sapmasini hesaplamak istediginiz sayilarin adedini giriniz : ");
	scanf("%d",&n);
	
	int dizi[n] , i ;
	
	float toplam=0;
	
	
	for(i=0 ; i<n ; i++)
	{
		printf("Lutfen %d. sayiyi giriniz : ",i+1);
		scanf("%d",&dizi[i]);
		toplam+=dizi[i];
	}
	
	float ort=toplam/n;

	float fark,kare=0;
	
	for(i=0 ; i<n ; i++)
	{
		fark=ort-dizi[i];
		kare+=pow(fark,2);
	}
	
	
	float bolum=kare/(n-1);
	float standartsapma=sqrt(bolum);
	
	
	printf("Girmis oldugunuz sayilarin standart sapmasi : %.2f",standartsapma);
	
	
	return 0;
}
