#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi1,sayi2;
	
	printf("Lutfen ilk sayiyi giriniz : ");
	scanf("%d",&sayi1);
	
	printf("Lutfen ikinci sayiyi giriniz : ");
	scanf("%d",&sayi2);
	
	int *s1,*s2;
	s1=&sayi1;
	s2=&sayi2;
	
	printf("***********Islem oncesi*********\n");
	printf("1.Sayi : %d\n",sayi1);
	printf("2.Sayi : %d\n",sayi2);
	printf("\n*********************************\n");
	
	
	degistir(s1,s2);
	
	printf("***********Islem sonrasi*********\n");
	printf("1.Sayi : %d\n",sayi1);
	printf("2.Sayi : %d",sayi2);
	
	return 0;
}

void degistir(int *s1,int *s2){
	
	int x;
	x=*s1;
	*s1=*s2;
	*s2=x;
}

