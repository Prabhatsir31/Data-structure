/*Author :@haiderali780
Write a C++ program to reverse a given string. The program
 should take in a string as input and output the reverse of
 the input string
Time:13 Feb,2022 _01:01
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverse_String(string s)
{
    if (s.length() == 0)
    {
        return s;
    }

    stack<char> reverse;

    for (char c : s)
    {
        reverse.push(c);
    }

    string reverse_string;

    while (!reverse.empty())
    {
        reverse_string += reverse.top();
        reverse.pop();
    }
    return reverse_string;
}

int main()
{
    string statement;
    cout << "Enter Any String: ";
    getline(cin, statement);
    cout << "\n";

    cout << "The reverse of above statement: " << reverse_String(statement) << endl;
    return 0;
}
