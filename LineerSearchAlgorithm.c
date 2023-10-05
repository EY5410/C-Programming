#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int n ;
	
	printf("Lutfen dizinin boyutunu giriniz : ");
	scanf("%d",&n);
	
	int dizi[n] ,i;
	
	for(i=0;i<n;i++)
	{
		printf("Lutfen dizinin %d. elemanini giriniz : ",i+1);
		scanf("%d",&dizi[i]);
	}
	
	int aranacakDeger , t=0;
	
	printf("Lutfen dizi icinde arayacaginiz degeri giriniz : ");
	scanf("%d",&aranacakDeger);
	
	for(i=0;i<n;i++)
	{
		if(dizi[i]==aranacakDeger)
		{
			printf("Girmis oldugunuz %d degeri dizinin %d indisli elemanidir\n",aranacakDeger,i);
			t=1;
		}
	}
	
	if(t==0)
	 {
	 	printf("Girmis oldugunuz %d degeri dizide bulunmamaktadir",aranacakDeger);
	 }
	
	
	
	return 0;
	
	
	
}
