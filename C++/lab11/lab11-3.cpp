#include<stdio.h>
#include<math.h>
struct Triangle {
	int a,b,c ;
};
double find_area(Triangle g){
	double p ;
	p = (g.a+g.b+g.c)/2 ;
	double s = sqrt(p*(p-g.a)*(p-g.b)*(p-g.c)) ;
	return s ;
};
int main(){
	Triangle k, t ;
	scanf("%d", &k.a) ;
	scanf("%d", &k.b) ;
	scanf("%d", &k.c) ;
	scanf("%d", &t.a) ;
	scanf("%d", &t.b) ;
	scanf("%d", &t.c) ;
	int z, v ;
	z = find_area(k) ;
	v = find_area(t) ;
	if(z>v){
		printf("Ehnii gurvaljin tom talbaitai") ;
	}
	if(z==v){
		printf("Edgeer gurvaljnuud hoorondoo tentsuu") ;
	}
	if(z<v){
		printf("Hoyrdah gurvaljin tom talbaitai") ;
	}
	return 0;
	
}
