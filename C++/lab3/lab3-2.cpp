#include<stdio.h>
int main(){
	int a,b,max,min;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	min=(a>b)*a+(a<b)*b;
	printf("%d");
}
