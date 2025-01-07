#include<stdio.h>
int main(){
	int n;
	printf("n=");
	scanf("%d",&n);
	if (n%400==0 || n%4==0 && n%100!=0){
		printf("undur jil");
	} else {
		printf("undur jil bish");
	}
}
