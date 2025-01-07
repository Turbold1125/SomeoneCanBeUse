#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d,kvadrat;
	double sum;
	printf("a toog oruul:");
	scanf("%d",&a);
	printf("b toog oruul:");
	scanf("%d",&b);
	printf("c toog oruul:");
	scanf("%d",&c);
	printf("d toog oruul:");
	scanf("%d",&d);
	kvadrat=((a*a)+(2*a*b)+(b*b)+d);
	sum=sqrt(kvadrat)/c;
	printf("sum: %.2f",kvadrat);
	return 0;
}
