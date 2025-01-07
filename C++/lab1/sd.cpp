#include <stdio.h>
using namespace std;
int countDivisors(int a[], int n) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j<=n\2; j++) {
            if(a[i] % j == 0) {
                if(a[i] % j == j) {
                    cnt++;
                }
                else {
                    cnt = cnt + 2;
                }
            }
        }
    }
    return cnt;
}

int main() {
    int n, i = 0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i < n; i++) {
        printf("%d",a[i]);
    }
    countDivisors(a,n);
    return 0;
}
