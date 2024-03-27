#include <stdio.h>

// Iterative Approach
int Ifib(int n)
{
    int t = 0, t1 = 1, s = 0;
    if (n <= 1)
        return n;
    for (int i = 2; i <= n; i++)
    {
        s = t + t1;
        t = t1;
        t1 = s;
    }
    return s;
}
// Recusrive Approach
int Rfib(int n)
{
    if (n <= 1)
        return n;
    return Rfib(n - 2) + Rfib(n - 1);
}
// Memorization Technique For Recursive calls
int Mfib(int n)
{
    static int F[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    if (F[n - 1] == -1)
        F[n - 1] = Mfib(n - 1);
    if (F[n - 2] == -1)
        F[n - 2] = Mfib(n - 2);
    F[n] = F[n - 2] + F[n - 1];
    return F[n - 2] + F[n - 1];
}
int main()
{
    int n;
    printf("Enter the number :\n");
    scanf("%d", &n);
    printf("The %d fibonaci element by iterative approach = %d\n", n, Ifib(n));
    printf("The %d fibonaci element by recursive approach = %d\n", n, Rfib(n));
    printf("The %d fibonaci element by memorization technique = %d\n", n, Mfib(n));
}