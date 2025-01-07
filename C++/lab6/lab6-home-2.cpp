#include<stdio.h>
int main(){
	int a[3][3];
	int i, n, m,j,i1=0, d=0;
	printf("n=");
	scanf("%d", &n);
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
		scanf("%d", &a[i][j]);
	}
}
d=0;
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			if (i==j)
			d=d+a[i][j];
			
printf("sumDiag1:%d\n", d);
d=0;
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			if ((i+j)==1)
			d=d+a[i][j];
printf("sumDiag2:%d\n", d);
	for (i=0; i<n; i++) {
		d=0;
		for (j=0; j<n; j++)
		d=d+a[i][j];
printf("rowNo:%d sumRow:%d\n", i+1,d);	
}
	for (i=0; i<n; i++) {
		d=0;
		for (j=0; j<n; j++)
		d=d+a[j][i];
printf("colNo:%d sumCol:%d\n", i+1,d);	
}
}
