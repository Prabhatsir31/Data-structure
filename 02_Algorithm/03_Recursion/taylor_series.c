#include <stdio.h>

double e(x, n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}
int main()
{
    int n, x;
    printf("Enter the value of x:\n");
    scanf("%d", &x);
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    printf("The value of e^%d at %d terms = %f\n ", x, n, e(x, n));
}