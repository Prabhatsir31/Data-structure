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
} /* End of main() */
