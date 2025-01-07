#include<stdio.h>
#include<math.h>
typedef struct Point Point ;
typedef struct Triangle Triangle ;
struct Point{
	int x, y;
};
struct Triangle{
	Point a, b, c;
};
double distance(Point a, Point b){
	double d;
	d=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
	return d;
}
int main(){
	Point p1, p2, p3;
	Triangle gur;
	scanf("%d%d%d%d%d%d", &gur.a.x, &gur.a.y, &gur.b.x, &gur.b.y, &gur.c.x, &gur.c.y);
	double d, e, d1, d2, d3;
	d1=distance(gur.a,gur.b);
	d2=distance(gur.b,gur.c);
	d3=distance(gur.c,gur.a);
	d=(d1+d2+d3)/2;
	e=sqrt(d*(d-d1)*(d-d2)*(d-d3));
	printf("%.2f", e);
	return 0;
}

