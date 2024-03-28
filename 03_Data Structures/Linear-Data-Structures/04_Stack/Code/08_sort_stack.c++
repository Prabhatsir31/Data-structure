/*Author :@haiderali780
Sort a given stack using only stack operations with loops
Time:13 Feb,2022 _01:01
*/

#include <stack>
#include <iostream>

using namespace std;

void sort_stack(stack<int> &s)
{

	if (s.size() == 0 || s.size() == 1)
		return;

	stack<int> sorted;

	while (!s.empty())
	{
		int temp = s.top();
		s.pop();

		while (!sorted.empty() && sorted.top() > temp)
		{
			s.push(sorted.top());
			sorted.pop();
		}

		sorted.push(temp);
	}

	while (!sorted.empty())
	{
		s.push(sorted.top());
		sorted.pop();
	}
}

int main()
{

	stack<int> s;

	int n;
	cout << "Enter the number of elements in the stack: ";
	cin >> n;

	cout << "Enter the elements in the stack: " << endl;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		s.push(x);
	}

	sort_stack(s);

	cout << "\n sorted stack: ";
	while (!s.empty())
	{
		cout << s.top() << "  ";
		s.pop();
	}
	cout << endl;
	return 0;
}
