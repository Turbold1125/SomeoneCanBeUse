#include<stdio.h>
int main(){
	int too,a,b,c,d,aziintoo;
	printf("toog oruulna uu:");
	scanf("%4d",&too);
	a=too/1000; 						// ehnii too
	b=too/100%10; 						// 2dahi too
	c=too/10%10;						// 3 dahi too
	d=too/1%10; 						// ehnii too
	aziintoo=(a==d && b==c); 			//shalgah
	printf ("aziin too:%d",aziintoo); 	//hevleh			
}
