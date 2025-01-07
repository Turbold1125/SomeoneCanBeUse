#include<stdio.h>
    
int power(int a, int b) {
    int i;
	int t=1;
    for (i=1; i<=b; i++)
        t *= a;
    return t;
}
int main(){
    int n, a;
    scanf("%d %d", & a, & n);
    // a- iin n zergiig bodoh
    printf("%d\n", power(a, n));
    // dahin 2 buhel too unshina
    scanf("%d %d", & a, & n);
    // ahiad tednii zergiig olno
    printf("%d\n", power(a, n));
    return 0;
}

