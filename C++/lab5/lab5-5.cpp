#include<stdio.h>
int main(){
	float n, C=0, F;
	printf("n=");
	scanf("%f", &n);
	while (n > F){
		F=1.8*C+32;
		if(n > F){
			printf("%.fC = %.1fF\n",C, F);
		}
		C++;
	}
}
