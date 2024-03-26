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
{
  int i, h, location;
  h = hash(key);
  location = h;
  for(i=1; i!=MAX; i++)
    {
      if(table[location].status == EMPTY)
        return -1;
      if(table[location].info.empid == key)
        location = (h+i)%MAX;
    }
  return -1;
} /* End of search() */

void insert()
{
  int i, location, h;
  int key = emprec.empid;  /* Extract ke from the record */
  h = hash(key);
  location = h; 
  for(i=1; i!=MAX; i++)
    {
      if(table[location].status == EMPTY || table[location].status == DELETED)
      {
        table[location].info = emprec;
        table[location].status = OCCUPIED;
        printf("Record inserted\n\n");
        return;
      }
      if(table[location].info.empid == key)
      {
        printf("Duplicate key\n\n");
        return;
      }
      location = (h+i)%MAX;
    }
  printf("Record can't be inserted : Table overflow\n\n);
} /* End of insert() */

void display(struct Record table[])
{
  int i;
  for(i=0; i<MAX; i++)
    {
      printf("[%d] : ",i);
      if(table[i].status == OCCUPIED)
      {
        
      }
    }
} /* End of display() */
