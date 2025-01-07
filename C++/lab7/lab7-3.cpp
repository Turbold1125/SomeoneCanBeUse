#include<stdio.h>
int main(){
	int a[100], n, i, k, j;
	printf("n=");
	scanf("%d",&n);
	printf("husnegtee nuhnu uu.\n");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	} 
	for(i=0, j=n-1; i<(double)n/2,
		j>=(double)n/2; i++, j--){
			if(a[i]==a[j])
				k=1; 
			else 
				k=0;
		}
	if (k==1)
		printf("\t tegsh hemtei.");
	 	else 
		printf("\t ugui.");
	}
		

