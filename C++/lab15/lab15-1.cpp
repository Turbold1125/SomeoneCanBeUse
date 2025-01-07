#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp= fopen ("input.txt", "r"), 
		 *ep= fopen ("output.txt", "w");
	int a, b;
	if(fp==NULL || ep==NULL)
	printf("not working");
	rewind(fp);
	fscanf(fp, "%d %d", &a, &b);
	fprintf(ep, "%d", a+b);
	fclose(fp);
	fclose(ep);
	return 0;
}
