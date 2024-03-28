/*Author :@haiderali780
Remove the middle element of a stack
Time:13 Feb,2022 _01:01
*/

#include <iostream>
#include <stack>

using namespace std;

void removeMiddle(stack<int> &s)
{
    if (s.empty())
        return;

    stack<int> s1;
    int mid = s.size() / 2;
    for (int i = 0; i < mid; i++)
    {
        s1.push(s.top());
        s.pop();
    }
    s.pop();

    while (!s1.empty())
    {
        s.push(s1.top());
        s1.pop();
    }
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    removeMiddle(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
