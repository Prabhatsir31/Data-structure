/* Sorting using radix sort */

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
}*start = NULL;
void radix_sort();
int large_dig();
