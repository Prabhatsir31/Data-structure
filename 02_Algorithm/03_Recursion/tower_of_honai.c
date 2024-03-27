#include <stdio.h>

void TOH(int n, int A, int B, int C)
{
    if (n <= 0)
        return;
    TOH(n - 1, A, C, B);
    printf("(%d, %d)\n", A, C);
    TOH(n - 1, B, A, C);
}
int main()
{
    int n;
    printf("How many plates you want to shift from A to C :\n");
    scanf("%d", &n);
    TOH(n, 1, 2, 3);
}