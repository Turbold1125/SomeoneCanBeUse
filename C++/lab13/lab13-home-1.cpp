#include<stdio.h>

void find(int a[] , int n, int *min , int *max){
	int i;
	*min=a[0];
	*max=a[0];
	for(i=0; i<n;i++){
		if(*min>a[i])
		*min=a[i];
		if(*max<a[i])
		*max=a[i];
	}
}

void read(int a[], int n){
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", & a[i]);
}

int main(){
	int n, max, min;
	scanf("%d", &n);
	int A[n];
	read(A, n);
	find(A, n, &min, &max);
	printf("hamgiin ih ni: %d\nhamgiin baga ni: %d", max, min);
	return 0;
}

