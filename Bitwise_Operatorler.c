#include <stdio.h>
#include <stdlib.h>

 
   //Bitsel operatörler 2 lik tabanda calisir . Derleyiciler,bizim 10 luk tabanda yazdigimiz degerleri arka planda 2 lik tabana donusturur.
   
   
 
 

int main(int argc, char *argv[]) {
	
/*	
  	1) &(ve) Operatorü : Bitsel tabandaki sayilara 've' mantiksal islemini uygular.
   
         1 & 1 = 1
         1 & 0 = 0
         0 & 1 = 0
         0 & 0 = 0
    
    ornek:
                      2^5 2^4 2^3 2^2  2^1   2^0
       37--------->   1   0   0   1    0     1
       63--------->   1   1   1   1    1     1
                    &_____________________________
                      1   0   0   1    0     1---------> 2^0*1 + 2^1*0 + 2^2*1 + 2^3*0 + 2^4*0 + 2^5*1 = 37
	*/  
	printf("******************* & Ornekleri **************************\n");
	printf("%d\n",54 & 108);
	printf("%d\n",37 & 63);
	printf("%d\n",123 & 45);
	printf("%d\n",94 & 98373);
	printf("%d\n",72 & 1);
	printf("%d\n",0 & 283);
    printf("***********************************************************\n");
/*	
  	2) |(veya) Operatorü : Bitsel tabandaki sayilara 'veya' mantiksal islemini uygular.
   
         1 & 1 = 1
         1 & 0 = 0
         0 & 1 = 0
         0 & 0 = 0
    
    ornek:
                      2^5 2^4 2^3 2^2  2^1   2^0
       37--------->   1   0   0   1    0     1
       63--------->   1   1   1   1    1     1
                    |_____________________________
                      1   1   1   1    1     1---------> 2^0*1 + 2^1*1 + 2^2*1 + 2^3*1 + 2^4*1 + 2^5*1 = 63
	*/  
	printf("************************ | Ornekleri **************************\n");
	printf("%d\n",54 | 108);
	printf("%d\n",37 | 63);
	printf("%d\n",123 | 45);
	printf("%d\n",94 | 98373);
	printf("%d\n",72 | 1);
	printf("%d\n",0 | 283);
    printf("***************************************************************\n");
    
    
 /*
 	3) ^(ya da) Operatorü : Bitsel tabandaki sayilara 'ya da' mantiksal islemini uygular.
   
         1 ^ 1 = 0
         1 ^ 0 = 1
         0 ^ 1 = 1
         0 ^ 0 = 0
    
    ornek:
                      2^5 2^4 2^3 2^2  2^1   2^0
       37--------->   1   0   0   1    0     1
       63--------->   1   1   1   1    1     1
                    ^_____________________________
                      0   1   1   0    1     0---------> 2^0*0 + 2^1*1 + 2^2*0 + 2^3*1 + 2^4*1 + 2^5*0 = 26
	*/  
	
	printf("************************ ^ Ornekleri **************************\n");
	printf("%d\n",54 ^ 108);
	printf("%d\n",37 ^ 63);
	printf("%d\n",123 ^ 45);
	printf("%d\n",94 ^ 98373);
	printf("%d\n",72 ^ 1);
	printf("%d\n",0 ^ 283);
    printf("***************************************************************\n");
   
   
   /*
    4) >>(saga kaydirma) Operatoru: 2 lik tabandaki sayiyi belirtilen kadar saga kaydirir.Kaydirildiktan sonra 2^0 in sagindakiler hesapa katilmaz.
       
	   
	                 2^5 2^4 2^3 2^2  2^1   2^0
       37--------->   1   0   0   1    0     1
       37>>3------>               1    0     0   1  0   1   = 2^0* + 2^1*0 + 2^2*1 =4
       
	   63--------->   1   1   1   1    1     1
	   63>>1------>       1   1   1    1     1   1  = 62
	*/   
	
		printf("************************ >> Ornekleri **************************\n");
	printf("%d\n",108>>4);
	printf("%d\n",37>>5);
	printf("%d\n",45>>1);
	printf("%d\n",98373>>7);
	printf("%d\n",72>>2);
	printf("%d\n",0>>5);
    printf("***************************************************************\n");
    
    
    
     /*
    5) <<(sola kaydirma) Operatoru: 2 lik tabandaki sayiyi belirtilen kadar sola kaydirir . Kaydirildiktan sonra 2^0 in sagindakiler hesapa katilmaz.
       
	   
	               2^8 2^7 2^6 2^5 2^4 2^3 2^2  2^1   2^0
       37--------->             1   0   0   1    0     1
       
       37<<3------> 1   0   0   1   0   1   = 2^3*1 + 2^4*0 + 2^5*1 + 2^6*0 + 2^7*0 + 2^8*1 = 296
       
	   63--------->             1   1   1   1   1     1
	   
	   63<<1------>         1   1   1   1   1   1  = 126
	*/   
	
		printf("************************ << Ornekleri **************************\n");
	printf("%d\n",108<<4);
	printf("%d\n",37<<5);
	printf("%d\n",45<<1);
	printf("%d\n",98373<<7);
	printf("%d\n",72<<2);
	printf("%d\n",0<<5);
    printf("***************************************************************\n");
	return 0;
}
