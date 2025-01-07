#include<stdio.h>
int A[100];
int prime_range(int a, int b){
	int i=a, j, m=0, t=0, c;
	for(i; i<=b; i++){
		c=0;
		for(j=2; j<=i; j++){
			if(i%j!=0)
			c++;
		}
		if(c==i-2||i==2){
			m++;
			A[t]=i;
			t++;
		}
}
	return m;
}
int main(){
	int a, b, q, i;
	scanf("%d %d", &a, &b);
	q=prime_range(a,b);
	printf("%d shirheg anhni too baina.\n", q);
	for(i=0; i<q; i++)
	printf("%d\n", A[i]);
}
