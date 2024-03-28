/*Author :@muhib7353
Question:Write a cpp program to insert the node at the start of the linkdlist
Time:22 Jan,2022 _13:07
*/
#include <iostream>

using namespace std;

// Creating A Node
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
// Insering the Node
void InsertAtStart(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next; // or tail=newNode;
}


int main()
{
    Node *node1 = new Node(20);
    Node *head = node1;
    InsertAtStart(head, 30);
   

  
    return 0;
}
