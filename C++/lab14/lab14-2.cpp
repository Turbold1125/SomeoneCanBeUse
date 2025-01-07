#include<stdio.h>
int size (int *begin , int *end) {
	return((end-begin));
}	
int main (){
	int i, n;
	scanf ("%d", &n) ;
	int a[n];
	printf ("%d\n", size (a, a + n) ) ; // n-ii utgiig xewlene .
	return 0;
}

