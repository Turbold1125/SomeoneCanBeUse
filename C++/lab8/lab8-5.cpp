#include<stdio.h>
#include<string.h>
int main(){
	char str[100], str2[100];
	printf("Ehnii ug oruulna uu\n");
	gets(str);
	printf("Daraagiin ug oruulna uu\n");
	gets(str2);
	strcat(str, str2);
	printf("\n");
	puts(str);
	return 0;
}
