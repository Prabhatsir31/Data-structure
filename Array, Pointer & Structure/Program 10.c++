/* Program to understand pointer to pointer */

#include<stdio.h>
main()
{
  int a = 5;
  int *pa;
  int *ppa;
  pa = &a;
  ppa = &pa;
  printf("Address of a = %p\n", &a);
  printf("Values of pa =  Address of a = %p\n", pa);
  printf("Values of *pa =  Address of a = %d\n", *pa);
  printf("Address of pa = %p\n", &pa);
  printf("Values of ppa =  Address of pa = %p\n", ppa);
  printf("Values of *ppa =  Address of pa = %p\n", *ppa);
  printf("Values of **ppa =  Address of a = %d\n", **ppa);
  printf("Address of ppa = %p\n", &ppa);
}
