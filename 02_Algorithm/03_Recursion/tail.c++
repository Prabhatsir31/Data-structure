#include <stdio.h>

void A(int n)
{
    if (n < 1)
        return;
    A(n - 1);
    printf("%d\n", n);
}
int main()
{
    A(4);
}
