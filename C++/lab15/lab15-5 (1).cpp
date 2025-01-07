#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct Student{
	char fname[20], lname[20], id[10];
	float golch;
};
void read_students(Student a[ ], int n){
	int i;
	for(i=0; i<n; i++){
		scanf("%s %s %s %f", &a[i].fname, &a[i].lname, &a[i].id, &a[i].golch);
	}
}
int main(){
	FILE *fp=fopen("filleee.txt","w");
	Student a[100];
	int n, i;
	char b[100];
	scanf("%d", &n);
	read_students(a, n);
		if(fp==NULL){
		printf("won't work");
	}
	rewind(fp);
	for(i=0;i<n;i++){
		fprintf(fp, "%s %s %s %.1f\n", a[i].fname, a[i].lname, a[i].id, a[i].golch);
	}
	fclose(fp);
	return 0;
}
