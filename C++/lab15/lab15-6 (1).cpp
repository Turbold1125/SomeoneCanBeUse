#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct Student{
	char fname[20], lname[20], id[10];
	float golch;
};
void print(Student a[ ], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%s %s %s %.1f \n", a[i].fname, a[i].lname, a[i].id, a[i].golch);
	}
}
int main(){
	FILE *fp=fopen("filleee.txt","r");
	Student a[100];
	int n, i, j;
	scanf("%d", &n);
		if(fp==NULL){
		printf("won't work");
	}
		rewind(fp);
	
	for(i=0;i<n;i++){
		fscanf(fp, "%s %s %s %f", &a[i].fname, &a[i].lname, &a[i].id, &a[i].golch);
	}
	print(a, n);
	fclose(fp);
	return 0;
}
