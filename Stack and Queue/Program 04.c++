/* Program for conversion of infix to postfix and evaluation of postfix  
    It will evaluate only single digit numbers
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define BLANK ' '
#define TAB '\t'
#define MAX 50
void push(long int symbol)
