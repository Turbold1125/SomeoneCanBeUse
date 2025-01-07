#include<stdio.h>

int pal(int a){
	int m, t=a, k=0;
	while(a>0){
		k=k*10+a%10;
		a=a/10;
	}
	m=(t==k);
	return m;
}
int main(){
	int b;
	printf("b toog oruulna uu!\n");
	scanf("%d", &b);
	printf("%d", pal(b));
	return 0;
}
