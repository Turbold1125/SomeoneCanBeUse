#include<stdio.h>
int main(){
	int a=0,b=2,c=2,d=1,e=0,f=4;
	a || printf("o") && c;
	c && d || printf("x");
	(d || b) && f || printf("x");
	a + b == 1 && printf("x");
	f && printf("o");
	b && d || printf("o");
	b + d == 3 && printf("o");
}
