/*Author :@muhib7353
Question:Write a cpp program to insert the at the end of the linkdlist
Time:22 Jan,2022 _13:39
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
void insertAtEnd(Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next; // or tail=newNode;
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
    Node *node = new Node(10);
    Node *tail = node;
    Node *head = node;
    insertAtEnd(tail, 20);
    print(head); // 10,20

    return 0;
}