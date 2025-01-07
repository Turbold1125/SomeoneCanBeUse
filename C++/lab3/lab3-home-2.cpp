#include<stdio.h>
int main(){
	int a,b,c,d;
	for (a=1; a<=9; a++){
		for (b=0; b<=9; b++) {
			for (c=0; c<=9; c++) {
				for (d=0; d<=9; d++) {
					printf("%d",a);
					printf("%d",b);
					printf("%d",c);
					printf("%d\n",d);
				}
			}
		}
	}
}
