#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float boy,kilo,bki;
	
	printf("Lutfen kilonuzu kg cinsinden giriniz : ");
	scanf("%f",&kilo);
	
	printf("Lutfen boyunuzu m cinsinden giriniz : ");
	scanf("%f",&boy);
	
	bki=kilo/(boy*boy);
	
	
	if(bki<=18.5)
	{
		printf("Beden kitle indeksiniz : %f kg/m^2 \nDegerlendirme Sonucu : Zayif ",bki);
	}
	
	else if(bki<=24.9)
	{
		printf("Beden kitle indeksiniz : %f kg/m^2 \nDegerlendirme Sonucu : Normal ",bki);
	}
	
	else if(bki<=29.9)
	{
		printf("Beden kitle indeksiniz : %f kg/m^2 \nDegerlendirme Sonucu : Kilolu ",bki);
	}
	
	else if(bki<=34.9)
	{
		printf("Beden kitle indeksiniz : %f kg/m^2 \nDegerlendirme Sonucu : 1.Derece Obezite ",bki);
	}
	
	else if(bki<=39.9)
	{
		printf("Beden kitle indeksiniz : %f kg/m^2 \nDegerlendirme Sonucu : 2.Derece Obezite ",bki);
	}
	else if(bki>=40)
	{
		printf("Beden kitle indeksiniz : %f kg/m^2 \nDegerlendirme Sonucu : 3.Derece Obezite",bki);
	}
	
	return 0;
}
