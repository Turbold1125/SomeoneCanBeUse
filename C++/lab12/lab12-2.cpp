#include<stdio.h>
typedef struct Date Date ;
struct Date {
int d, m, y;
};
void print(Date dt){
	if(dt.m<10&&dt.d>9)
	printf("%d/0%d/%d\n\n", dt.d, dt.m, dt.y);
	else if(dt.m>9&&dt.d<10)
	printf("%d/%d/0%d\n\n", dt.d, dt.m, dt.y);
	else if(dt.m<10&&dt.d<10)
    printf("0%d/0%d/%d\n\n", dt.d, dt.m, dt.y);
	else printf("%d/%d/%d\n\n", dt.d, dt.m, dt.y);
}
int less ( Date a, Date b){
	if(a.y<b.y)
	return 1;
	else if(a.m<b.m&&a.y==b.y)
	return 1;
	else if(a.d<b.d&&a.m==b.m&&a.y==b.y)
	return 1;
	else
	return 0;
}
Date read(){
	Date a;
	scanf("%d%d%d", &a.d, &a.m, &a.y);
	return(a);
}
int main(){
	Date a[100];
	int i, n;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	a[i]=read();
	for(i=0; i<n; i++)
	print(a[i]);
	return 0;
}

