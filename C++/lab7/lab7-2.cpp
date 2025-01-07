#include<stdio.h>
int main(){
	int a[100], n, i, sum=0, j=0;
	float div;
	printf("n=");
	scanf("%d", &n);
	printf("undur oruulna uu.\n");
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for (i=0; i<n; i++){
		sum=sum+a[i];
	}
		div=(float)sum/n;
		printf("AVG= %.2f \n",div);
	for (i=0; i<n; i++){
		if (div<a[i]){
			j=j+1;
		}
	}
	printf("AVG-s ih= %d huuhed bn.",j);
}
