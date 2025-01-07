#include <stdio.h>
int main(){
	int a,b,c,max,mid,min;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	max=(a>b && a>c)*a+(b>a && b>c)*b+(c>a && c>b)*c;													//ih toog oloh
	mid=(a>b && b>c)*b+(c>b && b>a)*b+(c>a && a>b)*a+(b>a && a>c)*a+(a>c && c>b)*c+(b>c && c>a)*c;		//dundah toog oloh
	min=(a<b && a<c)*a+(b<a && b<c)*b+(c<a && c<b)*c;													//baga toog oloh
	printf("max= %d\n",max);
	printf("mid= %d\n",mid);																			
	printf("min= %d\n",min);
}
