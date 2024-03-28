/*P9.8 Double hashing*/
#include <stdio.h>
#include<stdlib.h>
#define MAX 50

enum type_of_record {EMPTY, DELETED,OCCUPIED};

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

void insert( struct employee emprec, struct Record table[]);
int search(int key, struct Record table[]);
void del(int key, struct Record table[]);
void display(struct Record table[]);
int hash(int key);
int hash1(int key);
main()
{
	struct Record table[MAX];
	struct employee emprec;

	int i,key,choice;
	
	for(i=0; i<=MAX-1; i++)
		table[i].status = EMPTY;
		
	while(1)
	{
		printf("1.Insert a record\n");
		printf("2.Search a record\n");
		printf("3.Delete a record\n");
		printf("4.Display table\n");
		printf("5.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: 
				printf("Enter empid, name, age  : ");
				scanf("%d%s%d",&emprec.empid,emprec.name,&emprec.age);
				insert(emprec, table);
				break;
			case 2: 
				printf("Enter a key to be searched : ");
				scanf("%d", &key);
				i = search(key, table);
				if(i==-1)
					printf("Key not found\n");
				else
					printf("Key found at index %d\n", i);
				break;
			case 3: 
				printf("Enter a key to be deleted\n");
				scanf("%d",&key);
				del(key, table);
				break;
			case 4:
				display(table);
				break;
			case 5:
				exit(1);
		}
	}
}/*End of main()*/

int search(int key, struct Record table[])
{
	int i, h, location, h1;
    h = hash(key);				
	location = h;
	h1 = hash1(key);

	for(i=1; i!=MAX-1; i++)
	{
		if(table[location].status == EMPTY) 
			return -1;
		if(table[location].info.empid == key)
			return location;
		location = (h+i*h1)%MAX;								
	}
	return -1;
}/*End of search()*/

void insert( struct employee emprec, struct Record table[] )
{
	int i, location, h, h1;
	
	int key = emprec.empid;	/*Extract key from the record*/
	h = hash(key);				
	location = h;	
	h1 = hash1(key);

	for( i=1; i!=MAX-1; i++ )
	{
		if( table[location].status == EMPTY || table[location].status == DELETED  )
		{
			table[location].info = emprec;
			table[location].status = OCCUPIED;	
			printf("Record inserted\n\n");
			return;
		}
		if( table[location].info.empid == key )
		{
			printf("Duplicate key\n\n");
			return;
		}
        location = (h+i*h1)%MAX;				
	}
	printf("Record can't be inserted : Table overFlow\n\n");
}/*End of insert()*/

void display(struct Record table[])
{
	int i;
	for(i=0;i<MAX; i++)
	{
		printf("[%d]  : ",i );
		if(table[i].status==OCCUPIED) 
			printf("Occupied : %d   %s  %d\n",table[i].info.empid, table[i].info.name, table[i].info.age);
		else if(table[i].status==DELETED)
			printf("Deleted\n");
		else
			printf("Empty\n");
	}
}/*End of display()*/

void del(int key, struct Record table[])
{
	int location = search(key, table);
	if( location == -1 )
		printf("Key not found\n");
	else
		table[location].status = DELETED;
}/*End of del()*/

int hash(int key)
{
	return ( key%MAX );
}/*End of hash()*/

int hash1(int key)
{
	return (7-key%7);
}


