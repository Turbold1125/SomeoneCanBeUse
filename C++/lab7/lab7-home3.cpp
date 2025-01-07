#include<stdio.h>
int main(){
    int n,i,j, x;
    printf("n toog oruul\n");
	scanf("%d",&n);

	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			x=i+j+1;
			printf("%d ", x);
	    }
		printf("\n");
	}
	return 0;
}
