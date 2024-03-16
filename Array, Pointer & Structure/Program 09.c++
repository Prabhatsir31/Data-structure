/* Program to dereference pointer variables */

#include<stdio.h>
main()
{
  int a = 87;
  float b = 4.5;
  float *p1 = &a;
  float *p2 = &b;
  printf("Values of p1 = Address of a = %p\n", p1);
  printf("Values of p2 = Address of a = %p\n", p2);
  printf("Address of p1 = %p\n", &p1);
  printf("Address of p2 = %p\n", &p2);
  printf("Values of a = %d %d %d\n", a, *p1, * (&a));
  printf("Values of b = %f %f %f\n", b, *p2, * (&b));
}
