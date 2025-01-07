#include<stdio.h>
int main(){
	int n,niilber,k=0,sum=0;
	printf("n=");
	scanf("%d",&n);
	if(n%2==0){
		n=n%4;
		if(n==0){
			printf("4t huvaagdana");
		} else {
			printf("4t huvaagdahgui");
		}
	}else {
		while (n>0){
			k=n%10;
			sum=sum+k;
			n=n/10;
		}
		niilber=sum%3;
		if(niilber==0){
			printf("3t huvaagdana");
		} else {
			printf("3t huvaagdahgui");
		}
	}
}
