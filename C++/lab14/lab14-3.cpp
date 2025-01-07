#include<stdio.h>
int *find(int *begin, int *end, int x){
		int *i, z=0;
	for(i=begin; i<end; i++){
		if(*i==x){
		z=z+1;
		return i;}
	}
	if(z==0)
	return NULL;
}
int main(){
	int a[5]={3,7,1,2,4};
	int *p, x;
	printf("xaix too: ");
	scanf("%d", &x);
	p=find(a, a+5, x);
	if(p==NULL)
		printf("%d too oldsngu\n", x);
	else
		printf("%d too %d bairlald oldloo\n", x, p-a+1);
	return 0;
}

