#include <stdio.h>
#include <stdlib.h>

// Baslangic ve bitis degerleri klavyeden girilen aralýktaki asal sayilari ekrana yazdiran C kodu

int main(int argc, char *argv[]) {
	
	
	int baslangicDegeri,bitisAraligiDegeri;
	
	printf("Lutfen baslangic degerini giriniz : ");
	scanf("%d",&baslangic);
	
	printf("Lutfen bitis degerini giriniz : ");
	scanf("%d",&bitis);
	
	int i;
	printf("%d - %d arasindaki asal sayilar asagidaki gibidir\n",baslangicDegeri,bitisDegeri);
	for(i=baslangic;i<=bitis;i++){
		 if(asalmi(i)){
		 	printf("%d ",i);
		 }
	}
	
	
	
	return 0;
}

int asalmi(int sayi){
	int j;
	for(j=2;j<sayi;j++){
		if(sayi%j==0){
			return 0;
		}
	}
	return 1;
}
