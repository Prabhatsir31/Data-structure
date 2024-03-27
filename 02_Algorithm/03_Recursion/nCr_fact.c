#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}
// By formula
int nCr(int n, int r)
{
    int t, t1, t_t1;
    t = fact(n);
    t1 = fact(r);
    t_t1 = fact(n - r);
    return t / (t1 * t_t1);
}
// By Recusrive calls
int RnCr(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    return RnCr(n - 1, r - 1) + RnCr(n - 1, r);
}

int main()
{
    int n = 5, r = 3;
    printf("nCr of 5C3 by formula= %d\n", nCr(5, 3));
    printf("nCr of 5C3 by recursion= %d\n", RnCr(5, 3));
}