#include <iostream>
using namespace std;

class LinkList
{
private:
    class ListNode
    {
    public:
        int data;
        ListNode *next;
        ListNode(int data) : data(data)
        {
            next = NULL;
        }
    };
    ListNode *head;
    ListNode *tail;

public:
    LinkList()
    {
        head = NULL;
        tail = NULL;
    }
    ~LinkList()
    {
        cout << "destructor is called" << endl;
    }

    void insertAtHead(int data)
    {
        if (head == NULL)
        {
            tail = head = new ListNode(data);
            return;
        }
        else
        {
            ListNode *newListNode = new ListNode(data);
            newListNode->next = head;
            head = newListNode;
            return;
        }
    }
    void insertAtTail(int data)
    {
        if (tail == NULL)
        {
            head = tail = new ListNode(data);

            return;
        }
        else
        {
            ListNode *newListNode = new ListNode(data);
            tail->next = newListNode;
            tail = newListNode;
            return;
        }
    }

    void insertAtPosition(int position, int data)

    {
        int length = listLength();
        try
        {

            if (position == 1)
            {
                insertAtHead(data);
                return;
            }

            if (position >= 1 && position <= length)
            {
                ListNode *toGeTPosition = head;
                for (int i = 1; i < position - 1; i++)
                {
                    toGeTPosition = toGeTPosition->next;
                }

                if (toGeTPosition == NULL)
                {
                    insertAtTail(data);
                    return;
                }

                ListNode *temp = new ListNode(data);

                temp->next = toGeTPosition->next;
                toGeTPosition->next = temp;
                while (toGeTPosition->next != NULL)
                {
                    toGeTPosition = toGeTPosition->next;
                }
                tail = toGeTPosition;
                return;
            }
            else
            {
                 throw exception("Out of range");
            }
        }
        catch (exception e)
        {
            cout << e.what() << endl;
            return;
        }
    }

    int listLength()
    {
        ListNode *temp = head;
        if (temp == NULL)
            return 0;
        else
        {
            int length = 1;
            while (temp->next != NULL)
            {
                temp = temp->next;
                length++;
            }
            return length;
        }
    }

    void deleteListNodeAtKey(int key)
    {
        if (head == NULL)
        {
            cout << "List is empty,so how can delete?" << endl;
            return;
        }
        ListNode *temp = head;
        if (temp->data == key)
        {
            // ListNode* temp = head;
            head = head->next;
            temp = NULL;
            delete temp;
        }

        int length = listLength();

        ListNode *curr = head;
        ListNode *prev = NULL;
        bool found = false;
        for (int i = 1; i < length; i++)
        {

            prev = curr;
            curr = curr->next;
            if (curr->data == key)
            {
                found = true;
                break;
            }
        }

        if (found)
        {

            prev->next = curr->next;
            tail = prev;
            curr->next = NULL;
            delete curr;
            return;
        }
    }

    void Display()
    {
        ListNode *temp = head;
        cout << endl;
        cout << "head: " << head->data << endl;
        cout << "tail: " << tail->data << endl;
        cout << endl;
        if (temp == NULL)
        {
            cout << "-----List is empty-----" << endl;
        }

        while (temp != NULL)
        {
            cout << temp->data << "  ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main()
{
    LinkList list;
    // list.insertAtHead(1);

    list.insertAtTail(100);
    list.insertAtTail(101);
    list.insertAtTail(102);
    list.insertAtTail(103);
    /* list.Display();*/
    /*list.insertAtPosition(1, 531);
    list.insertAtPosition(2, 540);
    list.insertAtPosition(7, 546);*/

    list.deleteListNodeAtKey(103);
    list.Display();

    return 0;
}
