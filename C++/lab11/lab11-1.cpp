#include<stdio.h>
#include<math.h>
struct Triangle {
	int a,b,c ;
	int p,s ;
	
};
int main(){
	struct Triangle Triangle1, Triangle2, perimeter1, perimeter2, area1, area2  ;
	scanf("%d", &Triangle1.a) ;
	scanf("%d", &Triangle1.b) ;
	scanf("%d", &Triangle1.c) ;
	scanf("%d", &Triangle2.a) ;
	scanf("%d", &Triangle2.b) ;
	scanf("%d", &Triangle2.c) ;
	perimeter1.p = Triangle1.a + Triangle1.b + Triangle1.c ;
	perimeter2.p = Triangle2.a + Triangle2.b + Triangle2.c ;
	area1.s = sqrt(perimeter1.p*(perimeter1.p-Triangle1.a)*(perimeter1.p-Triangle1.b)*(perimeter1.p-Triangle1.c)) ;
	area2.s = sqrt(perimeter2.p*(perimeter2.p-Triangle2.a)*(perimeter2.p-Triangle2.b)*(perimeter2.p-Triangle2.c)) ;
	if (area1.s>area2.s){
		printf("Ehnii gurvaljnii talbai ih.") ;
	}
	if (area1.s<area2.s) {
		printf("Hoyrdah gurvaljnii talbai ih.") ;
	}
	if (area1.s==area2.s) {
	printf("Hoyr gurvaljnii talbai tentsuu baina.") ;
	}
	return 0;
}
