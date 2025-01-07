#include<stdio.h>
int main(){
	int a[100];
	int b[100];
	int i, n, m,j;
	printf("n=");
	scanf("%d", &n);
	printf("m=");
	scanf("%d", &m);
	printf("A husnegtend\n");
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	} 
	printf("B husnegtend\n");
	for (j=0; j<m; j++){
		scanf("%d", &b[j]);
	}
	for (i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			if (a[i]==b[j]) {
				printf("A husnegtend=%d\n",a[i]);
			}
		}
	}
}
