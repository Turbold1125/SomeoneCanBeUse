#include <stdio.h>
int main(){
	int n, i=1;			//0....n tul i=1-ees ehelne.
	scanf("%d", &n);
	do {
		printf("%d",i);
		i++;	//i(tooluur)-aa nemeegui tul munhiin tsikld orson.
	} while (i < n);
	printf("\n");
	return 0;
}
