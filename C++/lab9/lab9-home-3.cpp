#include<stdio.h>

void read(int a[], int n){
    int i;
    printf("husnegtiig nuh: \n");
    for (i=0; i<n; i++)
        scanf("%d", & a[i]);
}
void print(int a[], int n){
	int i;
	for(i=0; i<n;i++)
		printf("\n %d-r gishuun: %d",i+1, a[i]);
}
int join(int A[], int B[], int n, int m) {
	int i=n, j=0;
	for(j; j<m; j++, i++){
		A[i]=B[j];
	}
	return i;
}
int main() {
    int a[100], b[100], n, m;
    scanf("%d", & n);
    read(a, n);
    print(a, n);
    scanf("%d", & m);
    read(b, m);
    print(b, m);
    int k = join(a, b, n, m);
    print(a, k);
    return 0;
}
