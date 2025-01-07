#include<stdio.h>
int main(){
	int n,m,i,j,c,k,b;
	int a[i][j];
	printf("n,m toog oruul\n");
	scanf("%d%d", &n,&m);
	printf("husnegt\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	b=0;
	c=0;
	for(j=0;j<m;j++){
		for(i=0;i<n;i++){
		if(a[i][j]%2==0){
			k=k+1;
		}
		}
		if(k>b){
			b=k;
			k=0;
			c=j;
		}
		else b=b;
		k=0;
		c=j;
	}
	
	
	printf("%d", c);
}
