/* Binary Tree Sort */

#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct noe
{
  struct node *1child;
  int info;
  struct node *rchild;
};
struct node *stack[MAX];
int top = -1;
