#include<stdio.h>
int main(){
	int a[100];
	int i,x,n;
	printf("n=");
	scanf("%d", &n);
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("x=");
	scanf("%d", &x);
	for (i=0; i<n; i++){
		if (x == a[i] ){
			printf("bairlal:a[%d]  ", i);
		} else {
			printf("-1  ");
		}
	}
}
