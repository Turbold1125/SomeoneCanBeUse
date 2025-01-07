#include<stdio.h>
int main(){
	int n, i=1,sum=0;
	printf("n=");
	scanf("%d",&n);
	while (i <= n){
		if(i % 2 == 0){
			sum=sum+i;
		}
		i++;
	}
	printf("%d",sum);
}
