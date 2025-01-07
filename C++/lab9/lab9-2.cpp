#include<stdio.h>

void read(int a[], int k){
  int i; 
  for(i=0;i<k;i++){
    scanf("%d", &a[i]) ;
  }
}

void print(int a[], int k){
	int i;
  for(i=0;i<k;i++){
    printf("%d \n", a[i]) ;
  }
}

int main(){
  int n = 5 ;
  int m = 3 ;
  int A[n] ;
  int B[m] ;
  read(A, n) ;
  print(A, n) ;
  read(B, m) ;
  print(B, m) ;
  return 0;
}
