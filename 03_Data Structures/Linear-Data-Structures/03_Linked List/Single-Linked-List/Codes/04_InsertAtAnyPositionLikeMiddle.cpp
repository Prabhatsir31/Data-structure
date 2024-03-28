/*Author :@muhib7353
Question:Write a cpp program to insert the node at any position Like Middle of the linkdlist
Time:22 Jan,2022 _14:38
*/
#include <iostream>
using namespace std;
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
void insertAtAnyPosition(Node *&tail, Node *&head, int pos, int data)
{
    if (pos == 1)
    {
        InsertAtStart(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtEnd(tail, data);
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "\n";
        temp = temp->next;
    }
}
int main()
{
    Node *node = new Node(2);
    Node *tail = node;
    Node *head = node;
    insertAtEnd(tail, 3);
    InsertAtStart(head, -1);
    insertAtAnyPosition(tail, head, 2, 1);
    print(head); // -1,1,2,3

    return 0;
}