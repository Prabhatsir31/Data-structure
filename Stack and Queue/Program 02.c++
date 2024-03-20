/* Program of Queue using array */

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue_arr[MAX];
int rear = -1;
int front = -1;
void insert(int item);
int del();
int peek();
int isEmpty();
int isFull();
void display();

main()
{
  int choice,item;
  while(1)
    {
      printf("1. Insert\n");
      printf("2. Delete\n");
      printf("3. Display element at the front\n");
      printf("4. Display all elements of the queue\n");
      print("5. Quit\n");
      printf("Enter your choice : ");
      scanf("%d",&choice);
      switch(choice)
        {
          case 1:
            printf("Input the element for adding in queue :");
            scanf("%d", &item);
            insert(item);
            break;
          case 2:
            item = del();
            printf("Deleted element is %d\n", item);
            break;
          case 3:
            printf("Element at the front is  %d\n", peek());
            break;
          case 4:
            display();
            break;
          case 5:
            exit(1);
          default
             print("Wrong choice\n"); 
        } /* End of switch */
    } /* End of while */
} /* End of main() */

void insert(int item)
{
  if(isFull())
  {
    printf("Queue Overflow\n");
    return;
  }
  if(front == -1)
  {
    front = 0;
  }
  rear = rear+1;
  queue_arr[rear] = item;
} /* End of insert() */

int del()
{
  int item;
  if(isEmpty())
  {
    printf("Queue Underflow\n");
    exit(1);
  }
  item = queue_arr[front];
  front = front+1;
  return item;
} /* End of del() */

