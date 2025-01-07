#include<stdio.h>
int main(){
	int b[100];
	int n, i, j, k,a=0,d=0; 
	printf("n=");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &b[i]);
	}
	i=0;
	for(i=0; i<=n; i++) {
		if(b[i] < b[i+1]) {
		a=a+1;
		} else if (b[i] > b[i+1]) {
		d=d+1;
		}
	}
	if (a==n) {
	printf("usuh.n");
		} else if (d==n) {
			printf("buurah.");
			} else {
			printf("eremblegdeegui.");
			}
}
