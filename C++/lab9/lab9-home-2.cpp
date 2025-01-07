#include<stdio.h>

int digit_sum(int a){
	int sum=0;
	while(a>0){
		sum=sum+a%10;
		a=a/10;
	}
	return sum;
}
int main(){
	int n, o, i;
	printf("n toog oruulna uu: ");
	scanf("%d", &n);
	printf("tsifruudiin niilber: %d", digit_sum(n));
	return 0;
}
