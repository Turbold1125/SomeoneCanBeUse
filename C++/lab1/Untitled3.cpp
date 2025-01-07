#include <stdio.h>
#define SUM(x, y, z) (x + y + z)

int main()
{
    int num1, num2, num3;
    printf("3 toog oruulna uu: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("Sum(%d, %d, %d) = %d\n", num1, num2, num3, SUM(num1, num2, num3));
    return 0;
}
