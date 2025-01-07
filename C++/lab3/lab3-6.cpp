#include<stdio.h>
int main(){
	int a,b,c;
	printf("a=");
	scanf("%d",&a);																											//a-g garaas oruulah
	printf("b=");
	scanf("%d",&b);																											//b-g garaas oruulah
	printf("c=");
	scanf("%d",&c);																											//c-g garaas oruulah
    (a==b || a==c || b==c) || printf("eldev talt gurvaljin\n");																//eldev talt gurvaljing shalgah
	(a==b && a==c && b==c) && printf("zuv gurvaljin\n") || (a==b || b==c || c==a) && printf("adil hajuut gurvaljin\n");		//zuv ba adil hajuut gurvaljing shalgah
}
