#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	srand(time(NULL));
	printf("*********OYUN KURALLARI*******************\n*******************************************\n");
	printf("1)1-100 arasinda bir sayi tahmin edilecek.\n");
	printf("2)5 adet tahmin hakkiniz bulunmaktadir.\n");
	printf("Kurallar bu kadar hazirsaniz oyun basliyor.....\n");
	printf("****************************************\n");
	
	int sayi=rand()%99+1;
	int tahmin,i=1;
	
	while(i<=5){
		printf("%d. tahminizi giriniz : ",i);
		scanf("%d",&tahmin);
		
		if(tahmin<sayi &&i!=5)
		{
			printf("Yukari\n");
		}
		
		else if(tahmin>sayi  &&i!=5)
		{
			printf("Asagi\n");
		}
		else if(tahmin==sayi){
			printf(":):)TEBRIKLER %d. DENEMENIZDE SAYIYI DOGRU TAHMIN ETTINIZ:):)");
			break;
		}
		if(i==5)
		{
			printf("Oyun sizin icin bitti !!! Maalesef bilemediniz :( Sayi = %d",sayi);
		}
		i++;
	}
	return 0;
}
