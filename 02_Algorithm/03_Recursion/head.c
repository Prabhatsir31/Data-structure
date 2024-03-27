#include <stdio.h>

void A(int n)
{
    if (n < 1)
        return;
    printf("%d\n", n);
    A(n - 1);
}
int main()
{
    A(4);
}