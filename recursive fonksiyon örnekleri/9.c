#include <stdio.h>
#include <stdlib.h>

//belli bir aralıktaki cift sayiları yazdırma;

int cifthesapla(int sayi);

int main() {
	
	int n;
	printf("***0 ve n arasindaki cift sayilar***");
	printf("\n n degerini girin: ");
	scanf("%d",&n);
	
	cifthesapla(n);
	
	return 0;
}

int cifthesapla(int sayi){
	
	if(sayi==-1)
		return 1;
	else{
		if(sayi%2==0)
			printf(" %d",sayi);
		return cifthesapla(sayi-1);
	}	
}
