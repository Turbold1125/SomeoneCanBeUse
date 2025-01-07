#include<stdio.h>
#include<stdlib.h>
int *f_d(int n){
	int *a, b, i;
	if(malloc(sizeof(int)*(n/2))==NULL){
		printf("Not enough Memory!!!");
		exit(1);
	}
	a[0]=0;
	for(b=1, i=1; b<=n; b++){
		if(n%b==0){
			a[i]=b;
			i=i+1;
			a[0]=a[0]+1;
		}
	}
	return a;
}
int main(){
	int *a, i, n;
	scanf("%d", &n);
	a=f_d(n);
	for(i=0; i<=a[0]; i++)
	printf("%d ", a[i]);
	free(a);
	return 0;
}
