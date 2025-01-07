#include<stdio.h>
#include<math.h>
struct Point {
	int x, y ;	
} ;
double distance(Point a, Point b) {
	double d ;
	d = sqrt((b.x-a.x)*(b.x-a.x)*((b.y-a.y)*(b.y-a.y))) ;
	printf("%0.1lf", d);
} ;
int main(){
	Point m, n ;
	scanf("%d", &m.x) ;
	scanf("%d", &m.y) ;
	scanf("%d", &n.x) ;
	scanf("%d", &n.y) ;
	distance(m,n) ;
	return 0;
}
