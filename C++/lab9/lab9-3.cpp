#include<stdio.h>

int max(int a[], int k){
  int tmp, i;
  for(i=0;i<k;i++){
    scanf("%d", &a[i]);
  }
  for(i=0;i<k;i++){
    tmp = a[0] ;
    if(tmp<a[i]){
      tmp = a[i];
    }
  }
  return tmp;
}
int main(){
  int n = 5;
  int m = 3;
  int A[n+1];
  int B[m+1];
  if(max(A, n)>max(B,m)){
      printf("A array tom too aguulj baina\n");
  }else{
	  printf("B array tom too aguulj baina\n");
  }
  return 0;
}
