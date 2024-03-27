#include <iostream>
#include <fstream>
using namespace std;

class Inventory
{
    string product;
    int price;

public:
    Inventory()
    {
        product = "";
        price = 0;
        menu();
    }
    void spaces()
    {
        for (int i = 0; i < 4; i++)
            cout << "\n";
    }
    void set()
    {
        cout << "\t\t\tproduct:";
        getline(cin, product);
        cout << "\t\t\tprice :";
        cin >> price;
    }
    void get()
    {
        cout << "\t\t\tproduct : " << product << "\n";
        cout << "\t\t\tprice : " << price << "\n";
    }
    void setproduct()
    {
        cout << "\t\tproduct:";
        cin.ignore();
        getline(cin, product);
    }
    void setprice()
    {
        cout << "\t\t\tprice :";
        cin >> price;
    }
    string getproduct() const
    {
        return product;
    }
    int geprice() const
    {
        return price;
    }
    void create()
    {
        cin.ignore();
        set();
        ofstream file("Products.bin", ios::binary | ios::app);
        if (file.is_open())
        {
            file.write(reinterpret_cast<char *>(this), sizeof(*this));
            cout << "\t\t\t\t ---\n";
            file.close();
        }
        else
        {
            cout << "\t\t\t Error: File is not opened:\n";
        }
    }
    void seeAll()
    {
        ifstream file("Products.bin", ios::in | ios::binary);
        file.seekg(0, ios::beg);
        if (file.is_open())
        {
            while (file.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                get();
            }
            file.close();
        }
        else
        {
            cout << "\t\t\t Error: File is not opened:\n";
        }
    }
    void search()
    {
        ifstream file("Products.bin", ios::binary | ios::in);
        bool flag = false;
        string name;
        cout << "\t\t\t Enter name:\n";
        cin.ignore();
        getline(cin, name);
        if (file.is_open())
        {
            while (file.read(reinterpret_cast<char *>(this), sizeof(*this)) && !flag)
            {
                if (name == this->product)
                {
                    flag = true;
                    get();
                }
            }
            file.close();
        }
        else
        {
            cout << "\t\t\t Error: File is not opened:\n";
        }
        if (!flag)
            cout << "\t\t\t Such Product not found:\n";
    }
    void update()
    {
        fstream file("Products.bin", ios::binary | ios::in | ios::out);
        bool flag = false;
        string name;
        int pos;
        cout << "\t\t\t Enter name:\n";
        cin.ignore();
        getline(cin, name);
        if (file.is_open())
        {
            while (file.read(reinterpret_cast<char *>(this), sizeof(*this)) && !flag)
            {
                pos = file.tellg();
                if (name == this->product)
                {
                    set();
                    file.seekg(pos - sizeof(*this));
                    file.write(reinterpret_cast<char *>(this), sizeof(*this));
                    flag = true;
                    cout << "\t\t\t Updated Record:\n";
                    get();
                }
            }
            file.close();
        }
    }

    void del()
    {
        ifstream file("Products.bin", ios::binary | ios::in);
        ofstream temp("temp.bin", ios::binary | ios::out);
        bool flag = false;
        string name;
        cout << "\t\t\t Enter name:\n";
        cin.ignore();
        getline(cin, name);
        if (file.is_open())
        {
            while (file.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                if (name != this->product)
                {
                    temp.write(reinterpret_cast<char *>(this), sizeof(*this));
                }
                else
                {
                    flag = true;
                }
            }
            file.close();
            temp.close();
            remove("Products.bin");
            rename("temp.bin", "Products.bin");
        }
        else
        {
            cout << "\t\t\t Error: File is not opened:\n";
        }
        if (!flag)
            cout << "\t\t\t Such Product not found:\n";
    }
    void menu()
    {
        bool flag = false;
        int n;
        do
        {
            spaces();
            cout << "\t\t\tPress 1 to enter product:\n";
            cout << "\t\t\tPress 2 to see all products:\n";
            cout << "\t\t\tPress 3 to search any product based on its name:\n";
            cout << "\t\t\tPress 4 to update any product based on its name:\n";
            cout << "\t\t\tPress 5 to delete any product based on its name:\n";
            cout << "\t\t\tPress 0 to exit:\n";
            cin >> n;
            cout << "\n\n";
            switch (n)
            {
            case 1:
            {
                create();
                break;
            }
            case 2:
            {
                seeAll();
                break;
            }
            case 3:
            {
                search();
                break;
            }
            case 4:
            {
                update();
                break;
            }
            case 5:
            {
                del();
                break;
            }
            case 0:
            {
                flag = true;
                cout << "\t\t\tQuiting......\n";
                break;
            }

            default:
                break;
            }

        } while (flag == false);
    }
};
int main()
{
    Inventory();

    return 0;
}
