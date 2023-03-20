#include <stdio.h>
#include <stdlib.h>

int F(int a,int b){
	int t;
	if(a==0)
		return b;
	printf(" %d %d \n",a,b);
	t=a;
	a=b%t;
	return t + F(a,t);
}

int main() {
	
	int x=77,c,y=3;
	c= F(x,y);
	printf(" %d\n",c);
	return 0;
}
