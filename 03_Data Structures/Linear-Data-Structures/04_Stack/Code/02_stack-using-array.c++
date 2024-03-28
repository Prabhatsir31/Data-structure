/*Write a program to implement stack using array in C++
 
Author :@haiderali780

Time:30 Jan,2022 _12:01
*/

#include <iostream>
using namespace std;

class Stack
{
private:
	int size; // size of the stack
	int *arr; // pointer to dynamically allocated array to store elements of stack
	int top;  // variable to store the index of top element of the stack

public:
	// Constructor
	Stack(int size)
	{
		this->size = size;
		top = -1;
		arr = new int[size];
	}

	// push function to add elements to stack
	void push(int element)
	{
		// if there is space in the stack, add the element
		if (size - top > 1)
		{
			arr[++top] = element;
			return;
		}
		// if stack is full, display error message
		cout << "Stack overflow" << endl;
	}

	// pop function to remove elements from stack
	void pop()
	{
		// if stack is not empty, decrement the top
		if (top >= 0)
			top--;
		return;

		// if stack is empty, display error message
		cout << "Stack overflow" << endl;
	}

	// peek function to return the top element of the stack
	int peek()
	{
		// if stack is not empty, return the top element
		if (top >= 0)
			return arr[top];

		// if stack is empty, display error message and return -1
		cout << "Stack is empty " << endl;
		return -1;
	}

	// isEmty function to check if the stack is empty or not
	bool isEmty()
	{
		// return true if top is -1, indicating stack is empty
		return (top == -1);
	}

	// Destructor
	~Stack()
	{
		// delete the dynamically allocated memory for the stack array
		delete[] arr;
	}
};

int main()
{
	// Create a stack of size 10
	Stack stack(10);

	// Add elements to the stack
	stack.push(10);
	stack.push(20);
	stack.push(30);

	// Display the top element of the stack
	cout << "Top element: " << stack.peek() << endl;

	// Remove elements from the stack
	stack.pop();
	stack.pop();

	// Check if stack is empty
	if (stack.isEmty())
		cout << "Stack is empty" << endl;
	else
		cout << "Stack is not empty" << endl;

	return 0;
}
