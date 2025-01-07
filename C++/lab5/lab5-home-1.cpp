#include<stdio.h>
int main(){
	int n, i;
	printf("n=");
	scanf("%d",&n);
	for (i = 1; i <= n; i++){
		if(n%i==0){
			printf("%d ni %d t huvaagdana.\n",n, i);
		}
	}
}
