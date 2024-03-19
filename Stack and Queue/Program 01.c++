/* Program of stack using array */

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack_arr[MAX];
int top = -1;
void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();
void display();
main()
{
    int  choice,item;
    while (1)
    {
        printf("1. Push\n");
        printf("1. Pop\n");
        printf("3. Display the top element\n");
        printf("4. Display all stack elements\n");
        printf("5. Quit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the item to be pushed : ");
                scanf("%d",&item);
                push(item);
                break;

            case 2:
                item = pop();
                printf("Popped item is  %d \n",item);
                break;

            case 3:
                printf("Item at the top is : %d\n", peek());
                break;

            case 4:
                display();
                break;

            case 5:
                exit();

            default;
                printf("Wrong Choice\n");                         
        } /* End of Switch */
    } /* End of While */
    
} /* End of main() */
