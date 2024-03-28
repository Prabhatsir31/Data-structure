
/*Author :@haiderali780
Determine if a given expression containing parentheses, curly braces, and square brackets is well-formed
Time:07 Feb,2022 _11:45
*/

#include <iostream>
#include <stack>
#include <string>

bool isValidExpression(const std::string &expression)
{
    std::stack<char> s;
    for (char c : expression)
    {
        switch (c)
        {
        case '(':
        case '{':
        case '[':
            s.push(c);
            break;
        case ')':
            if (s.empty() || (s.top() != '('))
                return false;
            s.pop();
            break;
        case '}':
            if (s.empty() || (s.top() != '{'))
                return false;
            s.pop();
            break;
        case ']':
            if (s.empty() || (s.top() != '['))
                return false;
            s.pop();
            break;
        default:
            break;
        }
    }
    return s.empty();
}

int main()
{
    std::string expression = "{(})";
    std::cout << (isValidExpression(expression) ? "Expression is well-formed." : "Expression is not well-formed.") << std::endl;
    return 0;
}
