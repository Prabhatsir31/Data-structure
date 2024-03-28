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
// Printing the List
void print(Node *&head)
{
    Node *tempForPrint = head;
    while (tempForPrint != NULL)
    {
        cout << tempForPrint->data << "\n";
        tempForPrint = tempForPrint->next;
    }
}

int main()
{
    Node *node1 = new Node(20);
    Node *head = node1;
    InsertAtStart(head, 30);
    print(head); // 30,20

    while (head != NULL)
    {
        delete head;
        head = head->next;
    }

    return 0;
}