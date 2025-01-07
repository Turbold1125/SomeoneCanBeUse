#include<stdio.h>
int main(){						//M bagana		 N mur

int a[100][100];
	int n, m, i, j, too;
	printf("n=");
	scanf("%d", &n);
	printf("m=");
	scanf("%d", &m);
	too=1;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d  ", too);
		}
	too++;
	printf("\n");
	}
}


