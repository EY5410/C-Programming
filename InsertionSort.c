#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,i,j,x,t;
	printf("Lutfen siralamak istediginiz dizinin eleman sayisini giriniz : ");
	scanf("%d",&n);
	
	int dizi[n];
	
	for(i=0;i<n;i++)
	{
		printf("Lutfen dizinin %d. elemanini giriniz : ",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("\n\n");
	printf("****Siralanmamis dizi********************\n\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",dizi[i]);
	
	}
	
	for(i=1;i<n;i++)
	{
		x=dizi[i];
		j=i-1;
		while(j>=0 && x<dizi[j])
		{
			t=dizi[j];
			dizi[j]=x;
			dizi[j+1]=t;
			j--;
		}
	}
	
	printf("\n\n");
	printf("**********Siralanmis dizi*****************\n\n");
	for(i=0;i<n;i++){
		printf("%d   ",dizi[i]);
	}
	return 0;
}
