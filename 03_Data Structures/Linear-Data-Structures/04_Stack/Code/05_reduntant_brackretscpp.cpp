/*Author :@haiderali780
Check if a given string contains redundant brackets in C++.
 Output whether the string contains redundant brackets or not
Time:13 Feb,2022 _01:01
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool is_reduntatnt_brackets(const string &s)
{

	if (s.length() == 0)
		return false;

	bool found = true;

	stack<char> is_redantant;

	for (char c : s)
	{
		switch (c)
		{
		case '(':
		case '+':
		case '-':
		case '/':
		case '*':
		case '%':

			is_redantant.push(c);
			break;

		case ')':

			while (is_redantant.top() != '(')
			{
				if (is_redantant.top() == '+' || is_redantant.top() == '/' || is_redantant.top() == '%' || is_redantant.top() == '*' || is_redantant.top() == '-')
				{
					found = false;
					break;
				}

				is_redantant.pop();
			}

			is_redantant.pop();
			break;
		}
	}

	if (!is_redantant.empty()) // or /*is_redantant.top() == '('*/

		found = true;
	return found;
}

int main()
{
	string input;
	cout << "Enter a string: ";
	getline(cin, input);

	if (is_reduntatnt_brackets(input))
		cout << "The string contains redundant brackets." << endl;
	else
		cout << "The string does not contain redundant brackets." << endl;

	return 0;
}
