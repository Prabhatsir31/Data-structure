/* Program to show how to return more than one value from a function using call by reference */

#include<stdio.h>
func(int x, int y, int *ps, int *pd, int *pp);
main()
{
  int a, b, sum, diff, prod;
  func(a, b, &'sum, &diff, &prod);
  printf("Sum = %d, Difference = %d, Product = %d\n", sum, diff, prod);  
}

