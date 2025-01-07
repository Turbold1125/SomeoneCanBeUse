#include<stdio.h>
#include<math.h>
struct Rational{
	int d, n;
};
typedef struct Rational Rational;
int Nod(int a, int b)
{
    while (a && b)
        if (a >= b)
           a -= b;
        else
           b -= a;
    return a | b;
}
Rational add(Rational a, Rational b){
	Rational c;
		c.d=a.d*b.n+b.d*a.n;
		c.n=a.n*b.n;
	return (c);
}
Rational sub(Rational a, Rational b){
	Rational c;
		c.d=a.d*b.n-b.d*a.n;
		c.n=a.n*b.n;
	return (c);
}
Rational mult(Rational a, Rational b){
	Rational c;
		c.d=a.d*b.d;
		c.n=a.n*b.n;
	return (c);
}
Rational div(Rational a, Rational b){
	Rational c;
		c.d=a.d*b.n;
		c.n=b.d*a.n;
	return (c);
}
Rational simplify(Rational c){
	Rational d;
		if(Nod(c.d, c.n)>1){
		d.d=c.d/Nod(c.d, c.n);
		d.n=c.n/Nod(c.d, c.n);
		return (d);
	}
	else return(c);

}
void print(Rational a){
	Rational b;
	b=simplify(a);
	printf("%d|%d\n", b.d, b.n);	
}
int main(){
	struct Rational eh, h;
	scanf("%d%d%d%d", &eh.d, &eh.n, &h.d, &h.n );
	print(add(eh, h));
	print(sub(eh, h));
	print(mult(eh, h));
	print(div(eh, h));
	return 0;
}
