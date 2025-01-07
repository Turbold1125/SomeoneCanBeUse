#include <stdio.h>    
#include <math.h>     
int main (){
	float x1,x2,descriminant,too,i;
	int a,b,c;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	descriminant=b*b-4*a*c;
	printf("descriminant=%.2f\n",descriminant);
	if (descriminant>0){
		x1=(-b-sqrt(descriminant))/(2*a);
		x2=(-b+sqrt(descriminant))/(2*a);
		printf("x1=%.2f\n",x1);
		printf("x2=%.2f",x2);
	}
		else if (descriminant==0){
			x1=(-b+sqrt(descriminant))/(2*a);
			x2=(-b+sqrt(descriminant))/(2*a);
			printf("x1=%.2f\n",x1);
			printf("x2=%.2f",x2);
	} 
 			else {
				too=-b/(2*a);
				i=sqrt(-descriminant)/(2*a);
				x1=too+i;
				x2=too-i;
				printf("x1=%.2fi\n",x1);
				printf("x2=%.2fi",x2);
	}
	
	
	
}

