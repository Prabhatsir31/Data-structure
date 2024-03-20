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
          
        }
    }
}
