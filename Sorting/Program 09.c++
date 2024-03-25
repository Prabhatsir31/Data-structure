/* Program of sorting through heapsort */

#include<stdio.h>
#define MAX 100
void heap_sort(int arr[], int size);
void buildHeap(int arr[], int size);
int del_root(int arr[], int *size);
