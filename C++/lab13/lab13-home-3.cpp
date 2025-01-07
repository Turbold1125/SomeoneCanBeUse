#include<stdio.h>

struct Rational {
int d, n; // d/n butarxai
};

typedef struct Rational Rational;

Rational e;
Rational *add( const Rational *a, const Rational *b){
	Rational *c = &e;
	e.d = a -> d * b -> d;
	return c;
}
Rational sub( const Rational *a, const Rational *b);
Rational mult ( const Rational *a, const Rational *b);
Rational div(const Rational *a, const Rational *b);
void simplify(Rational *a); 
void read(Rational *a); 
void print(Rational *a){
	printf("%d/%d", a->d, a->n);
	
}

int main(){
	Rational e, o, s;
	Rational *n=&e, *p=&o;
	printf("ehnii Rational toonii hurtver huwaariig oruulna uu: ");
	scanf("%d %d", &e.d, &e.n);
	printf("2doh Rational toonii hurtver huwaariig oruulna uu: ");
	scanf("%d %d", &o.d, &o.n);
	printf("\nTanii oruulsan 2 Rational toonii niilber: ");
	print(add(n, p));
//	print(p);
/*	printf("\nTanii oruulsan 2 Rational toonii ylgavar: ");
	print(simplify(sub(&e, &o)));
	printf("\nTanii oruulsan 2 Rational toonii urjver: ");
	print(simplify(mult(&e, &o)));
	printf("\nTanii oruulsan 2 Rational toonii noogdvor: ");
	print(simplify(div(&e, &o))); */
	return 0;
}

