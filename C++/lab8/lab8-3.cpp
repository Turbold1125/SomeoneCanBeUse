#include<stdio.h>
#include<string.h>
int main(){
	char str[100], str2[100];
	int i, j=0, check=0, count=0;
	printf("ehnii ug oruulna uu!\n");
	gets(str);
	printf("daraagiin ug oruulna uu!\n");
	gets(str2);
	for (i=0; str[i]>=i; i++){
		if(str[i]==str2[j]){	
			check++;
		}
		j++;
		count++;
	}
	if(check==count){
		printf("adilhan\n");
	} else {
		printf("uur\n");
	}
	return 0;
}
