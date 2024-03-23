/* Program to display and find out the sum of series */

#include<stdio.h>
int rseries(int n);
main()
{
  printf("Enter number of terms : ");
  scanf("%d", &n);
  printf("\b\b = %d\n\n", rseries(n))); /* \b to erase last + sign */
} /* End of main() */
int rseries(int n)
{
  int sum;
  if(n == 0)
    return 0;
  sum = (n + rseries(n-1));
  printf("%d + ", n);
  return sum;
} /* end of rseries() */
