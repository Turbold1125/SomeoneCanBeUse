#include <stdio.h>    
#include <math.h>     
int main (){
   float x,p,c;
   int a,b;
   printf("x=");
   scanf("%f",&x);
   printf("a=");
   scanf("%d",&a);
   printf("b=");
   scanf("%d",&b);
   	p=3.14;
   c=sqrt((a*a)+(b*b)-(2*a*b)+cos(x*p/180));
	printf("hariu: %.2f",c);
return 0;
}
