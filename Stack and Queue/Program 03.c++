/* Program of reversing a string using stack */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 10
int top = -1;
char stack[MAX];
char pop();
void push(char);
main()
{
  char str[20];
  unsigned int i;
  printf("Enter the string : ");
  gets(str);
  /* Push characters of the string str on the stack */
  for(i=0; i<strlen(str); i++)
    {
      str[i] = pop();
    }
  
}
