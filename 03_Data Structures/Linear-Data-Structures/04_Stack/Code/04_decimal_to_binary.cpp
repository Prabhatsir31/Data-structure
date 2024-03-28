
/*Author :@haiderali780
Convert a decimal number to binary using a stack and return the result as an integer
Time:07 Feb,2022 _12:01
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int decimalToBinary(int decimal)
{
    stack<int> binary;
    while (decimal > 0)
    {
        binary.push(decimal % 2);
        decimal /= 2;
    }
    string result;
    while (!binary.empty())
    {
        result += to_string(binary.top());
        binary.pop();
    }
    return stoi(result);
}

int main()
{
    int decimal = 10;
    int binary = decimalToBinary(decimal);
    cout << binary << endl;
    return 0;
}
