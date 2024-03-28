/*Author :@muhib7353
Question:Write a c++ Program taht perform the following functionalities:
1.push()
2.pop()
3.shift()
4.unshift()
5.deleteMiddle()
6.insertMiddle()
7.displayReverse()
8.displayForward()
Note: Use the Concept of Single Linkdlist and make the menu driven to give user functionalities to enter todoList like Application.
Time:22 Jan,2022 _14:38
*/

#include <iostream>
#include <string>
using namespace std;
int Length = 0;

//===============NODE=================
class ListItem
{
public:
    int id;
    string item;
    ListItem *nextAdd;
    ListItem() : id(0), item(""), nextAdd(NULL) {}
};
//===============MENU_DRIVEN_LAYOUT=================
class Layout
{
    int choosedOption;

public:
    Layout() : choosedOption(0) {}
    virtual int page()
    {
        defaultPadding();
        cout << "____________YOUR TODOLIST_______________\n";
        defaultPadding();
        cout << "Enter 1. To add the todo list item \n";
        defaultLeftPadding();
        cout << "Enter 2. To check done the todo list item \n";
        defaultLeftPadding();
        cout << "Enter 3. To see the todoList \n";
        defaultLeftPadding();
        cout << "Enter 0. to Exit \n";
        cin >> choosedOption;
        return choosedOption;
    }
    void defaultTopPadding()
    {
        for (int i = 0; i < 3; i++)
            cout << "\n";
    }
    void defaultLeftPadding()
    {
        cout << "\t\t\t";
    }
    void defaultPadding()
    {
        defaultTopPadding();
        defaultLeftPadding();
    }
};
//===============ADD_PAGE_LAYOUT================

class AddPage : public Layout
{
    int addOption;

public:
    AddPage() : addOption(0) {}
    int page()
    {
        system("clear");
        defaultPadding();
        cout << "____________ADD TODO LIST ITEM_______________\n";
        if (Length == 0)
        {
            return 1;
        }
        defaultPadding();
        cout << "Enter 1. To add at start of list\n";
        defaultLeftPadding();
        cout << "Enter 2. To add at bottom of list \n";
        if (Length >= 2)
        {
            defaultLeftPadding();
            cout << "Enter 3. To add at any middle position of list \n";
        }
        cin >> addOption;
        return addOption;
    }
};
//===============DONE_PAGE_LAYOUT=================
class DonePage : public Layout
{
    int doneOption;

public:
    DonePage() : doneOption(0) {}
    int page()
    {
        system("clear");
        defaultPadding();
        cout << "____________DONE TODO LIST ITEM_______________\n";
        defaultPadding();
        cout << "Enter id number to done item.\n";
        cin >> doneOption;
        return doneOption;
    }
};
//===============MAIN_APPLICATION_CLASS=================
class TodoList_Application : public Layout
{
    int addType;
    int removedID;
    Layout *layout;
    ListItem *head;
    ListItem *tail;

public:
    TodoList_Application() : head(NULL), tail(NULL)
    {
        layout = new Layout();
        applicationNavigation();
    }
    void applicationNavigation()
    {
        bool currPage = true;
        do
        {
            switch (layout->page())
            {
            case 0:
            {
                cout << "Quiting...........\n";
                currPage = false;
                break;
            }
            case 1:
            {
                layout = new AddPage();
                addType = layout->page();
                add();
                layout = new Layout;
                system("clear");
                break;
            }
            case 2:
            {
                layout = new DonePage();
                display();
                removedID = layout->page();
                done();
                layout = new Layout;
                system("clear");
                break;
            }
            case 3:
            {
                system("clear");
                display();
                break;
            }
            }
        } while (currPage);
    }
    void add()
    {
        if (addType == 1)
        {
            addItemAtStart();
        }
        if (addType == 2)
        {
            addItemAtEnd();
        }
        if (addType == 3)
        {
            addItemAtMiddle();
        }
    }
    void addItemAtStart()
    {
        if (head == NULL)
        {
            head = tail = new ListItem;
            defaultPadding();
            cout << "Enter the list item: ";
            cin.ignore();
            getline(cin, head->item);
            Length = length();
            return;
        }
        ListItem *newItem = new ListItem;
        defaultPadding();
        cout << "Enter the list item: ";
        cin.ignore();
        getline(cin, newItem->item);
        newItem->nextAdd = head;
        head = newItem;
        Length = length();
    }
    void addItemAtEnd()
    {
        if (tail == NULL)
        {
            head = tail = new ListItem;
            defaultPadding();
            cout << "Enter the list item: ";
            cin.ignore();
            getline(cin, tail->item);
            Length = length();
            return;
        }
        ListItem *newItem = new ListItem;
        defaultPadding();
        cout << "Enter the list item: ";
        cin.ignore();
        getline(cin, newItem->item);
        tail->nextAdd = newItem;
        tail = newItem;
        Length = length();
    }
    void addItemAtMiddle()
    {
        display();
        defaultPadding();
        cout << "Enter ID place, where to add item :";
        int pos;
        cin >> pos;
        if (pos == 1)
        {
            addItemAtStart();
            Length = length();
            return;
        }
        ListItem *newItem = new ListItem;
        defaultPadding();
        cout << "Enter the list item: ";
        cin.ignore();
        getline(cin, newItem->item);

        int cur = 1;
        ListItem *temp = head;
        while (cur < pos - 1)
        {
            temp = temp->nextAdd;
            cur++;
        }
        if (temp->nextAdd == NULL)
        {
            addItemAtEnd();
            Length = length();
            return;
        }
        newItem->nextAdd = temp->nextAdd;
        temp->nextAdd = newItem;
        Length = length();
    }
    void done()
    {
        ListItem *cur = head;
        ListItem *prev = NULL;
        if (removedID == 1)
        {
            head = head->nextAdd;
            cur->nextAdd = NULL;
            delete cur;
        }
        else
        {
            int count = 1;
            while (count < removedID)
            {
                prev = cur;
                cur = cur->nextAdd;
                count++;
            }
            prev->nextAdd = cur->nextAdd;
            cur->nextAdd = NULL;
            delete cur;
        }

        Length = length();
    }
    void display()
    {
        defaultPadding();
        if (Length == 0)
        {
            cout << "List is Empty! Press 1 to add\n";
            return;
        }
        cout << "Your TodoList: \n";
        ListItem *temp = head;
        int count = 1;
        defaultPadding();
        while (temp != NULL)
        {
            temp->id = count;
            cout << temp->id << ". " << temp->item << "\n";
            temp = temp->nextAdd;
            count++;
            defaultLeftPadding();
        }
    }
    int length()
    {
        ListItem *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            temp = temp->nextAdd;
            count++;
        }
        return count;
    }
};

using namespace std;
int main()
{
    TodoList_Application newApp;
    return 0;
}
