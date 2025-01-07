#include<stdio.h>
int main(){						//M bagana		 N mur

int a[100][100];
	int n, m, i, j, k;
	printf("n=");
	scanf("%d", &n);

	k=1;
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			a[i][j]=k++;
		}
	}
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			printf("  %d ",k);
		}
	printf("\n");
	}
}
