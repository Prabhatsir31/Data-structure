#include <stdio.h>

//// iterative approach
// double e(int x, int n)
// {
//     double s = 1;
//     int i;
//     double num = 1;
//     double den = 1;
//     for (i = 1; i <= n; i++)
//     {
//         num *= x;
//         den *= i;
//         s += num / den;
//     }
//     return s;
// }

// recursive approach
double
e(int x, int n)
{
    static double s = 1;
    if (n == 0)
        return s;
    s = 1 + ((x * s) / n);
    return e(x, n - 1);
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