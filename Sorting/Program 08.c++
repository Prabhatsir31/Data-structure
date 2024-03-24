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
void push_stack(struct node *item);
int stack_empty();
struct node *insert(struct node *ptr, int item);
void inorder(struct node *ptr, int arr[]);
struct node *Destroy(struct node *ptr);
main()
{} /* End of main() */
