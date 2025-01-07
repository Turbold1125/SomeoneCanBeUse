#include<stdio.h>
int max(int, int);
int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	printf("%d\n", max(x, y));
	return 0;
}
int max(int a, int b){
	if(a > b){
		return a;
	}
	return b;
}
