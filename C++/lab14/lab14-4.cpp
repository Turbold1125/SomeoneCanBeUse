#include<stdio.h>
void find(int *begin, int *end, int x, int y){
		int *i;
	for(i=begin; i<end; i++){
		if(*i==x){
		*i=y;
		}
	}
}
int main(){
	int a[5]={3,7,1,2,4};
	int x, y, i;
	printf("solih too: ");
	scanf("%d%d", &x, &y);
	find(a, a+5, x, y);
	for(i=0; i<5; i++){
	printf("%d ", *(a+i));
	}
	return 0;
}

