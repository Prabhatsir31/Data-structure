/* Program to raise a floating point number to a positive integer */

#include<stdio.h>
float power(float n; int n);
main()
{
  float a,p;
  int n;
  printf("Enter a and n : ");
  scanf("%f%d", &a, &n);
  p = power(a,n);
  printf("%f raised to power %d is %f\n", a,n,p);
} /* End of main() */
