#include<stdio.h>
int main(){
	int a[100][100];
	int n, m, x, i, j,mur,bagana;
	printf("n=");
	scanf("%d", &n);
	printf("m=");
	scanf("%d", &m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++)
		scanf("%d", &a[i][j]);
	}
	printf("x=");
	scanf("%d", &x);
	for (i=0; i<n; i++){
		for(j=0; j<m; j++){
		mur = i;
		bagana = j;
		if (a[i][j] == x){
			printf("A[%d][%d] ", mur, bagana);
		} else {
			printf ("-1 \t");
		}		
}
		printf("\n");
}
}
