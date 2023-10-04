#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int satir,sutun;
	
	printf("Transpozunu bulmak istediginiz matrisin satir sayisini giriniz : ");
	scanf("%d",&satir);
	
	printf("Transpozunu bulmak istediginiz matrisin sutun sayisini giriniz : ");
	scanf("%d",&sutun);
	
	printf("\n");
	
	int i , j , dizi[satir][sutun];
	
	for(i=0 ; i<satir ; i++)
	{
		for(j=0 ; j<sutun ; j++)
		{
			printf("Lutfen %d. satir %d. sutun elemanini giriniz : ",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
		printf("\n");
	}
	
	printf("*********************Girmis oldugunuz matris*****************************\n------------------------------------------------------\n");
	
	for(i=0 ; i<satir ; i++)
	{
		for(j=0 ; j<sutun ; j++)
		{
		     printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("*********************Girmis oldugunuz matrisin transpozu*****************************\n------------------------------------------------------\n");
	
	for(i=0 ; i<sutun ; i++)
	{
		for(j=0 ; j<satir ; j++)
		{
		     printf("%d ",dizi[j][i	]);
		}
		printf("\n");
	}
	return 0;
}
