#include<stdio.h>
#include<math.h>
int main(){
	int a,h;
	double s;
	printf("a toog oruul:");
	scanf("%d", &a);
	printf("h toog oruul:");
	scanf("%d", &h);
	s=(double)1/2*a*h;
	printf("s= %.2f", s);
	return 0;
}
