/* Binary Tree Sort */

#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct noe
{
  struct node *lchild;
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
{
  struct node *root=NULL;
  int arr[MAX], n, i;
  printf("Enter the number of elements : ");\
  scanf("%d", &n);
  for(i=0; i<n; i++)
    {
      printf("Enter element %d : ", i+1);
      scanf("%d", &arr[i]);
    }
  for(i=0; i<n; i++)
    root = insert(root, arr[i]);
  inorder(root, arr);
  printf("\nSorted list is : \n");
  for(i=0; i<n; i++)
    printf("%d ", arr[i]);
  root = Destroy(root);
} /* End of main() */

struct node *insert(struct node *root, int ikey)
{
  struct node *tmp, *par, *ptr;
  ptr = root;
  par = NULL;
  while(ptr != NULL)
    {
      par = ptr;
      if(ikey < ptr->info)
        ptr = ptr->lchild;
      else
        ptr = ptr->rchild;
    }
  
} /* End of insert() */











