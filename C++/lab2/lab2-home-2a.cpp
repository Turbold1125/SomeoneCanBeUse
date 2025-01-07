#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d;
	double ehniihaalt,sum,hurtver,huvaari;
	printf("a toog oruul:");
	scanf("%d",&a);
	printf("b toog oruul:");
	scanf("%d",&b);
	printf("c toog oruul:");
	scanf("%d",&c);
	printf("d toog oruul:");
	scanf("%d",&d);
	ehniihaalt=(a*a*a+(double)b/c);
	hurtver=sqrt(ehniihaalt*ehniihaalt+d);
	huvaari=d*d-(double)a*b/c;
	sum=hurtver/huvaari*d;
	printf("sum= %.2f", ehniihaalt);
}

