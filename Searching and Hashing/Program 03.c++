/* Linear probing */

#include<stdio.h>
#define MAX 50
enum type_of_record (EMPTY, DELETED, OCCUPIED);
struct employee
{
  int empid;
  char name[20];
  int age;
};
struct Record
{
  struct employee info;
  enum type_of_record status;
};
void insert(struct employee emprec, struct Record table[]);
int search(int key, struct Record table[]);
void del(int key, struct Record table[]);
void display(struct Record table[]);
int hash(int key);
main()
{
  int i, key, choice;
  struct Record table[MAX];
  struct employee emprec;
  for(i=0; i<=MAX-1; i++)
    table[i].status = EMPTY;
  while(1)
    {
      printf("1. Insert a record\n");
      printf("2. Search a record\n");
    }
} /* End of main() */
