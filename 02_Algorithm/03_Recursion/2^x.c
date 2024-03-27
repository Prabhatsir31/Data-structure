#include <stdio.h>

int power(int m, int n)
{
    if (n == 0)
        return 1;
    return power(m, n - 1) * m;
}
void main()
{
    printf("Result of 2^4 = %d\n", power(2, 4));
}