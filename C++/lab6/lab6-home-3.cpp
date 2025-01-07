#include<stdio.h>
int main(){
	int a[100][100][50];		// K-orts // M-davhar bur ail // N-davhar baishin
	int k, m, n, i, j, p,l=1;				
	printf("k=");				
	scanf("%d", &k);
	printf("n=");				
	scanf("%d", &n);
	printf("m=");				
	scanf("%d", &m);
	for (i=0; i<k; i++){
		for (j=0; j<n; j++){
			for (p=0; p<m; p++){
		a[i][j][p]=l; l++;
		}
	}
}
	for (i=0; i<k; i++){
			printf("\t");
			printf("orts %d", i+1);
			printf("\n");
		for (j=0; j<n; j++){
				printf("davhar-%d: ", j+1);
			for (p=0; p<m; p++){
				printf("%d ", a[i][j][p]);
		}
	 printf("\n");
	} 
} 	
}

