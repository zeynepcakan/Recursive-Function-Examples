#include <stdio.h>
#include <stdlib.h>
#define N 5

int F(int i){
	return (N-i+2)*(N-i+1)*i*i*i/2;
}

int G(int s, int r){
	int center, a;
	printf("\n %d %d",s,r);
	center=(s+r)/2;
	if((r-s)==0)
		return F(s);
	a = G(s,center) + G(center+1,r);
	return a;	
}

int main() {
	
	int k;
	k= G(3,N);
	printf("\n %d\n",k);
	
	return 0;
}
