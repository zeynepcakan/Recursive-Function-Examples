#include <stdio.h>

int yildiz2(int n, int i, int j){
	if(j==n+1)
		return -1;
	if((i+j)==n+1  || i==j )
		printf("*");
	else
		printf(" ");
	yildiz2(n,i,j+1);			
}

int yildiz(int n,int i){
	if(i==n+10)
		return -1;
	yildiz2(n,i,1);
	printf("\n");
	yildiz(n,i+1);	
}
 
int main(){
	
	printf("bir sayi girin= ");
	int n;
	scanf("%d",&n);
	yildiz(n,1);
	return 0;
} 
