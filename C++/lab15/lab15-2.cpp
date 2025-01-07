#include<stdio.h>
#include<stdlib.h>
int *get_array(int n, int value){
	int *p, i;
	if(malloc(sizeof(int)*n)==NULL){
		printf("Enough memory");
		exit(1);
	}
	for(i=0; i<n; i++)
	p[i]=value;
	return p;
}
int main(){
	int *a, i, n, v;
	scanf("%d %d", &n, &v);
	a=get_array(n, v);
	for(i=0; i<n; i++)
	printf("%d ", a[i]);
	free(a);
	return 0;
}
