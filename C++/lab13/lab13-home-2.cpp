#include<stdio.h>

int *search(int a[], int value, int size ){
	int i, *c=0;
	for (i = 0; i < size; i++)
        if(a[i] == value)
        c=&a[i];
    return c;
}
void read(int a[], int n){
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", & a[i]);
}
void print(int a[], int n){
	int i;
	for(i = 0; i < n; i++)
		printf("\n %d-r gishuun: %d",i+1, a[i]);
}

int main ()
{
int a [100];
read (a, 5) ;
print (a, 5) ;
int *p;
p = search(a, 3, 5) ;
if (p == NULL)
printf(" Oldsongui \n") ;
else
printf("\n %d too %d bairlald oldloo \n", *p, p - a) ;
return 0;
}



