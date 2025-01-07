#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp= fopen ("input.txt", "r"), 
		 *ep= fopen ("output.txt", "w");
	int a, b, i, sum=0;
	if(fp==NULL || ep==NULL)
	printf("not working");
	rewind(fp);
	fscanf(fp, "%d %d", &a, &b);
	for(i=0; i<b; i++){
		sum=sum+a;
	}
	fprintf(ep, "%d", sum);
	fclose(fp);
	fclose(ep);
	return 0;
}
