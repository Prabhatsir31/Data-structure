#include <stdio.h>
#include <stdbool.h>

// iterative approarch
// bool isSumOfthree(int n)
// {
//     if (n <= 0)
//         return false;
//     while (n % 3 == 0)
//     {
//         n = n / 3;
//     }
//     return n == 1;
// }

bool isSumOfthree(int n)
{
    if (n == 1)
        return n;
    else if (n <= 0)
        return false;
    if (n % 3 != 0)
        return false;
    n = n / 3;

    return isSumOfthree(n);
}

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
        bool ans = isSumOfthree(n);
        printf("%d\n", ans);
    } while (n != -1);

    return 0;
}
