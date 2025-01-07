#include<stdio.h>

void read(int a[], int n){
    int i;
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    }

int max(int a[], int n){
	int m, i; 
	m=a[0];
	for(i=1; i<n; i++)
	if(m<a[i])
	m=a[i];
	return m;
}
int main(){
	int A[5], B[3], k;
	printf("ehnii husnegtiin 5n gishuudiig oruul: ");
	read(A, 5);
	printf("2doh husnegtiin 3n gishuudiig oruul: ");
	read(B, 3);
	if(max(A, 5)<max(B, 3)){
	printf("B husnegt hamgiin tom gishuniig aguulj bn hamgiin ih gishuun ni: %d", max(B,3));
	}else{
	printf("A husnegt hamgiin tom gishuniig aguulj bn hamgiin ih gishuun ni: %d", max(A,5));
	}
	return 0;
}
