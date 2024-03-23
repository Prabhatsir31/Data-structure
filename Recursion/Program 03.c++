/* Finds the sum of digitss of an integer */

#include<stdio.h>
int sumdigits(long int n)
{
  if(n/10 == 0) /* if n is a single digit number */
    return n;
  return n%10 + sumdigits(n/10);
} /* End of sumdigits() */
/* Display the digits of an integer */
