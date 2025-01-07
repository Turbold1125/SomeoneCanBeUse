#include<stdio.h>
int main(){
	int a[100], b[100], c[100];
	int i, n, m, j, k;
	printf("n= bolon m=");
	scanf("%d", &n);
	scanf("%d", &m);
	printf("A husnegtend=");
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	} 
	printf("B husnegtend=");
	for (j=0; j<m; j++){
		scanf("%d", &b[j]);
	}
	i=0;
	j=0; 
	k=0;
	for (i<n &&j<m; i=0, j=0, k=0;){
		if(a[i] < b[j]){
			c[k]=a[i];
			i++;
			k++;
		} else if (a[i] > b[j]){
			c[k]=b[j];
			j++;
			k++;
		} else {
			c[k]=a[i];
			i++;
			j++;
			k++;
		}
	}
	if (i<n){
		for (i=0; i<n; i++){
			c[k]=a[i];
			k++;
		}
	} else if (j<m) {
		for (j=0; j<m; j++){
			c[k]=b[j];
			k++;
		}
	}
	printf("olonlog");
	for (i=0; i<k; i++){
		printf("%d ", k);
	}
}
