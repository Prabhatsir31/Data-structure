// Author: Muhib Arshad (@muhib7353 everywhere)
// Date and Time: 2 October , 20222  15:21:00
// Question : FAST University Lab4 (OOP) : Instructor=> Mam Abeeda

/*
Implement a C++ Function void myTokenizer(char *data, char **list_tokens, char delimiter)
Your function should store the tokens in the list_tokens and split the data array on the basis of delimiter. Delimiter is another name for ‘separator’. Call the function in main and print the list_tokens. 
Start traversing the data array until you find delimiter. Once you find the delimiter store the first token in the first row of list_tokens. Now find second token and store in the second row of list_tokens and so on…

First find the number of tokens that can be formed from data. This will be the number of rows for char **list_tokens. Each row will have different number of columns. e.g. If string is my,name and delimiter is ‘,’ then following shall be the result.
		 	0      1      2	      3	    4	
0	m	y	‘\0’
1	n	a	m	e	‘\0’

Don’t allocate extra memory. Release memory before exiting program.

Sample:
Input: my,name,is,Mr,Faheem
Delimiter: , 
Tokens are: 
my 
name 
is 
Mr 
Faheem

*/
#include <iostream>
#include <string>

using namespace std;

void myTokenizer(char *data, char **list_tokens, char delimiter)
{

    int rowIndex = 0;
    int size = 1;
    for (int i = 0; data[i] != '\0'; i++)
    {
        if (data[i] != delimiter)
        {
            char *temp = new char[size + 1];
            for (int j = 0; j < size; j++)
            {
                temp[i] = list_tokens[rowIndex][j];
            }
            temp[size - 1] = data[i];
            temp[size] = '\0';
            delete[] list_tokens[rowIndex];
            list_tokens[rowIndex] = temp;
            size++;
        }
        if (data[i] == delimiter)
        {
            rowIndex++;
            size=1;
        }
    }
}
void print(char **matrix,int row)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;matrix[i][j]!='\0';i++)
        {
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    string str;
    getline(cin, str);
    int size = 0;
    char delimeter;
    int row = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        size++;
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
        {
            delimeter = str[i];
            break;
        }
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == delimeter)
        {
            row++;
        }
    }

    cout << size << endl;
    cout << row << endl;
    char *data = new char[size];
    char **list_tokens = new char *[row];
    for (int i = 0; i < row; i++)
        list_tokens[i] = new char[1]{'\0'};

    myTokenizer(data, list_tokens, delimeter);
    print(list_tokens,row);

    delete[] data;
    data = nullptr;
    for (int i = 0; i < row; i++)
        delete[] list_tokens[i];
    delete[] list_tokens;
    list_tokens = nullptr;
    return 0;
}
