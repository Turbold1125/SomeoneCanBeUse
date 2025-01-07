#include<stdio.h>
void reverse (int *begin , int *end) {
	int *i, x, *b;
	for(i=begin, b=end-1; i<(end-begin)/2+begin; i++, b--){
		x=*i;
		*i=*b;
		*b=x;
	}
}
int main ()
{
	int b;
int a[5] = {3 , 7 , 1 , 2 , 4};
scanf("%d",&b);
reverse(a, a + b);
int i;
for (i = 0; i < 5; i++)
printf ("%d ", a[i]) ; // 1 7 3 2 4
return 0;
}

