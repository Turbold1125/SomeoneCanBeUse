#include<stdio.h>
#include<math.h>
int count(int n){
	int count=0;
	int i, m;
	for(i=1; i<=n/2; i++){
			if(n%i==0){
				count++;
	}
}
	return count;
}
int main(){
	int n, i, m;
	scanf("%d", &n);
	printf("%d\n",count(n));
	}





