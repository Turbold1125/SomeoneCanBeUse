#include<stdio.h>
int main(){
	int a, b, hieh;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	while(a!=0 && b!=0){
		if(a>b){
			a=a-b;
		} else {
			b=b-a;
		}
	} 
	hieh=a+b;
	printf("hieh=%d",hieh);
}
