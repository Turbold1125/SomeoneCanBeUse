#include<stdio.h>
int main(){
	int n,sum;
	printf("n=");
	scanf("%d",&n);
	while(n>0){
		sum=sum+(n%10);
		n=n/10;
	}
	printf("sum=%d",sum);
}
