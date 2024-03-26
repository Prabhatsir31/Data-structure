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
      printf("3. Delete a record\n");
      printf("4. Display table\n");
      printf("5. Exit\n");
      printf("Enter your choicce\n");
      scanf("%d", &choice\n);
      switch(choice)
        {
          case 1:
            printf("Enter empid.name, age : ");
            scanf("%d%s%d", &emprec.empid, emprec.name, &emprec.age);
            insert(emprec,table);
            break;
          case 2:
            printf("Enter a key to be searched : ");
            scanf("%d", &key);
            i = search(key, table);
            if(i==1)
              printf("key not found\n");
            else
              printf("key found at index %d\n",i);
            break;
          case 3:
            printf("Enter a key to be deleted\n");
            scanf("%d", &key);
            del(key, table);
            break;
          case 4: 
            display(table);
            break;
          case 5:
            exit(1);
        } /* End of switch() */
    } /* End of while() */
} /* End of main() */

int search(int key, struct Record table[])
