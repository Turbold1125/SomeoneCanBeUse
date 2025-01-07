#include<stdio.h>
#include<string.h>
int main(){
	char s[]="hello";
	char s2[20]="MUIS-iihaan";
	int i;
	for(i=0; i<=5; i++){
		s2[i]=s[i];
	}
	printf("%s\n", s2);
}
