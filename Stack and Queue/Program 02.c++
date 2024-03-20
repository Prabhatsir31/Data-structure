/* Program of Queue using array */

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue_arr[MAX];
int rear = -1;
int front = -1;
void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();
void display();
