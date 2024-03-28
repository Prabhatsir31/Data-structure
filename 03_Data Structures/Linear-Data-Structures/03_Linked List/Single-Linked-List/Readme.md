# Singly Linked List

A `singly linked list` is a linked list where each `node` points to the **next node** in the list. It does not have a `pointer` to the previous node. It is the simplest type of linked list and is useful for implementation of `stack` and `queue`.

## Implementation

1.  with struct
2.  with classes

### Implementation with Struct

```cpp
struct ListNode {
    int data; // element stored in the node
    struct ListNode* next; // pointer to the next node
};

```

In this example, the `struct` **ListNode** has two elements: an integer `data` and a pointer `next` to another ListNode `struct`. This allows us to create a ``linked list` of `nodes`, where each node contains an element and a pointer to the next node in the list.

### Implementation with classes

```cpp
class LinkList
{
private:
   class ListNode
   {
   public:
       int data;
       ListNode* next;


       ListNode(int data) : data(data)
       {
           next = NULL;

       }
   };
   ListNode* head;
   ListNode* tail;

public:
   LinkList()
   {
       head = NULL;
       tail = NULL;
   }
   ~LinkList()
   {
       ListNode* traversingList = head;

       while (traversingList != NULL)
       {
           ListNode* deleteNode = traversingList;
           traversingList = traversingList->next;
           delete deleteNode;
       }

   }
};

```
The Above code  represents a singly linked list with classes. The class **LinkList** has a private inner class **ListNode** that represents a single node in the list, which has a constructor that initializes the next pointer to `NULL`. The outer class **LinkList** has three private members: a pointer `head` to the first node in the list, a pointer `tail` to the last node in the list and a constructor that initializes the head and tail pointers to `NUL`L. The class also has a `destructor` that iterates through the list, starting at the head, and deletes each `node`, releasing memory.

## Operations 
we can do Following operations with singly list.
- [Insertion:At Start](/01_Data%20Structures/Linear-Data-Structures/03_Linked%20List/Single-Linked-List/Codes/01_InsertionAtStart.cpp)
- [Traverse List](/01_Data%20Structures/Linear-Data-Structures/03_Linked%20List/Single-Linked-List/Codes/02_Traverse.cpp)
- [Insertion:At Last](/01_Data%20Structures/Linear-Data-Structures/03_Linked%20List/Single-Linked-List/Codes/03_InsertAtEnd.cpp)
- [Insertion:At any position](/01_Data%20Structures/Linear-Data-Structures/03_Linked%20List/Single-Linked-List/Codes/04_InsertAtAnyPositionLikeMiddle.cpp)
- [Deletion: Any Node](/01_Data%20Structures/Linear-Data-Structures/03_Linked%20List/Single-Linked-List/Codes/05_DeleteAnyNode.cpp)



