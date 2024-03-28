# Stack

> A `stack` is a **linear data structure** that implements the **Last-In-First-Out** (LIFO) principle, where elements are added and removed from the same end `(top)` of the `stack`

## How stacks are used in computer science?👀

- **Function calls**: store function calls and call order.
- **Expression evaluation**: convert to postfix/prefix and evaluate using stack.
- **Memory management**: keep track of memory allocations/deallocations.
- **Undo/Redo operations**: store operation history.
- **Graph algorithms**: keep track of visited vertices in DFS.
- **Parsing**: convert infix to postfix/prefix notation.

## Stack Operations

- **Push**: Add element to top of stack
- **Pop**: Remove element from top
- **Peek**: View top element without removing
- **isEmpty**: Check if stack is empty.

## Stack container class

The **Standard Template Library** (`STL`) in C++ provides a stack container class that implements a stack data structure. You can use this class to perform stack operations, such as `push` and `pop`, without having to write your own stack implementation from scratch. Here's how to use the stack class in `C++`.

<p align="center">
    <img src="/05_Material/CodeSnaps/stack-1.png" style="height: 70vh; padding-left: 80vh;">
 </p>

## Stack Implementations

- using arrays
- using linked lists

### 1. Using Arrays

An `array` can be declared either as a `static` or `dynamic array`, and can be declared in main, within a `struct`, or within a `class`. The choice between `static` and `dynamic` affects the **memory allocation** and **scope** of the array. Declaring the array in main gives it the highest scope, while declaring it within a `struct` or `class` restricts its scope to within those entities.

#### Operations for stack

- **push**
<p align="center">
    <img src="/05_Material/CodeSnaps/stack-2.png" style="height: 60vh; padding-left: 70vh;">
 </p>

- **pop**
<p align="center">
    <img src="/05_Material/CodeSnaps/stack-3.png" style="height: 30vh; padding-left: 40vh;">
 </p>

- **peek**
<p align="center">
    <img src="/05_Material/CodeSnaps/stack-4.png" style="height: 40vh; padding-left: 50vh;">
 </p>

- **isEmpty**
<p align="center">
    <img src="/05_Material/CodeSnaps/stack-5.png" style="height: 40vh; padding-left: 50vh;">
 </p>


#### Advantages of stack implementation using arrays:

- Fast access time due to indexed access
- Cache-friendly due to contiguous memory allocation
- Simple to implement
- Fixed memory utilization with all memory utilized
- Good choice when size of stack is known and push/pop operations are frequent.
#### Disadvantages of stack implementation using arrays:

- Fixed size, can't grow dynamically
- Wasteful of memory if stack size is much larger than needed
- Need to handle stack overflow by manually checking size before each push operation

### 2. Using Link List
A `linked list` is a data structure that consists of a sequence of **nodes**, where each node has a `reference` (a "link") to the next node in the list. The first node in the list is referred to as the **"head"** of the list, and the last node in the list typically has a reference to a **null** or special value to indicate the end of the list. In this article, we will discuss the implementation of a stack using a linked list data structure.

#### Operations for stack

- **push**
<p align="center">
    <img src="/05_Material/CodeSnaps/stack-7.png" style="height: 30vh; padding-left: 50vh;">
 </p>

- **pop**
<p align="center">
    <img src="/05_Material/CodeSnaps/stack-6.png" style="height: 40vh; padding-left: 50vh;">
 </p>

- **peek**
<p align="center">
    <img src="/05_Material/CodeSnaps/stack-9.png" style="height: 30vh; padding-left: 50vh;">
 </p>

- **isEmpty**
<p align="center">
    <img src="/05_Material/CodeSnaps/stack-8.png" style="height: 20vh; padding-left: 20vh;">
 </p>

- **Display**
<p align="center">
    <img src="/05_Material/CodeSnaps/stack-10.png" style="height: 50vh; padding-left: 50vh;">
 </p>

#### Advantages of stack implementation using arrays:

- The stack size can be adjusted dynamically based on the current number of elements in the stack, allowing for efficient memory utilization.
- The linked list implementation can handle an arbitrary number of elements, making it a good choice for implementing stacks with unknown or variable sizes.
- Linked lists are relatively straightforward to implement compared to arrays, especially for stacks that grow and shrink dynamically.

#### Disadvantages of stack implementation using arrays:

- Linked lists have slower access time compared to arrays due to the need to traverse the list to find a specific element.
- Linked lists have a higher overhead in terms of memory utilization due to the need to store references to the next node for each node in the list.

