/* Finds the sum of digitss of an integer */

#include<stdio.h>
int sumdigits(long int n)
{
  if(n/10 == 0) /* if n is a single digit number */
    return n;
  return n%10 + sumdigits(n/10);
} /* End of sumdigits() */

/* Display the digits of an integer */
void display(long int n)
{
  if(n/10 == 0)
  {
    printf("%d", n);
    return;
  }
  display(n/10);
  printf("%d", n%10);
} /* End of display() */

/* Displays the digits of an integer in reverse order */
void Rdisplay(long int n)
{
  if(n/10 == 0)
  {
    printf("%d", n);
    return;
  }
  printf("%d", n%10);
  Rdisplay(n/10);
} /* End of Rdisplay() */
