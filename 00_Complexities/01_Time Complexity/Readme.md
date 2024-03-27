# Time Complexity

> The time complexity of an algorithm refers to the amount of time it takes for the algorithm to run as a function of the size of the input. In other words, it's a measure of how efficient the algorithm is. Time complexity is commonly expressed using big O notation, which describes the upper bound on the number of operations the algorithm takes to complete

C++ is a popular programming language that is widely used for both academic and industry purposes. It is an object-oriented language and is known for its efficiency and performance. In this blog post, we will take a closer look at the time complexity of algorithms in C++ and see how it can affect the performance of our code.

## Some common time complexities and their corresponding big O notation

- **Constant time (O(1)):** The amount of time taken by the algorithm does not depend on the size of the input. For example, accessing an element in an array using an index is a constant time operation.

- **Logarithmic time (O(log n)):** The amount of time taken by the algorithm increases logarithmically with the size of the input. For example, searching for an element in a binary search tree is a logarithmic time operation.

- **Linear time (O(n)):** The amount of time taken by the algorithm increases linearly with the size of the input. For example, traversing an array and printing its elements is a linear time operation.

- **Quadratic time (O(n^2)):** The amount of time taken by the algorithm increases quadratically with the size of the input. For example, checking all pairs of elements in an array for a certain condition is a quadratic time operation.

- Exponential time (O(2^n)):\*\* The amount of time taken by the algorithm increases exponentially with the size of the input. For example, solving the traveling salesman problem using a brute force algorithm is an exponential time operation.

It's important to note that big O notation only describes the upper bound on the number of operations. So, an algorithm with a time complexity of O(n) may actually take less time to run than an algorithm with a time complexity of O(log n) for small inputs. However, as the input size increases, the O(n) algorithm will take much longer to run than the O(log n) algorithm.

Let's take a look at a few examples of algorithms and their time complexities in C++.

## Example 1: Linear search

<p align="center">
    <img src="/05_Material/CodeSnaps/time1.png" style="height: 40vh; padding-left: 50vh;">
    
 </p>

> **The time complexity of this linear search algorithm is O(n), as it takes one operation (comparing the current element to x) for each element in the array**.

## Example 2: Bubble Sort

<p align="center">
    <img src="/05_Material/CodeSnaps/time2.png" style="height: 40vh; padding-left: 50vh;">
    
 </p>

> **The time complexity of this bubble sort algorithm is O(n^2), as it takes n operations (comparing and swapping**

# Step by Step guide to calcualte the time complexity of any algorithum

## Step 1: Understand the problem

Before calculating the time complexity, it's important to understand the problem that the algorithm is trying to solve. In this example, let's consider a simple algorithm that takes an array of integers and finds the maximum value.

## Step 2: Identify the basic operations

Identify the basic operations that the algorithm performs as a function of the input size. In this example, the basic operation is the comparison of two integers.

## Step 3: Count the number of operations

Count the number of times the basic operations are performed as a function of the input size. For example, if the input array has n elements, the algorithm will perform n-1 comparisons.

## Step 4: Express the time complexity

Express the time complexity using big O notation. In this example, the time complexity is O(n), since the number of comparisons increases linearly with the input size.

## Step 5: Analyze the time complexity

Analyze the time complexity to understand how the algorithm performs as the input size increases. O(n) is considered to be a linear time complexity and is generally considered to be efficient for small to medium-sized inputs.

# Example:

<p align="center">
    <img src="/05_Material/CodeSnaps/time3.png" style="height: 40vh; padding-left: 50vh;">
 </p>

Here, the basic operation is comparison of two integers and assignment operation. The number of times the comparison is performed is n-1, as the number of elements in the array are n. So, the time complexity of this algorithm is O(n) which is considered as Linear Time Complexity.

Note: Time complexity of arithmetic operations like addition, subtraction, multiplication, division etc. are considered as O(1) as they take constant time regardless of the input size.

It's always important to test the algorithm with different inputs and different implementations to ensure that the time complexity is accurate.

## Short Note:

- **Cost**: Every number of operation
- **Time**: Number of times repeated

Like ,

<p align="center">
    <img src="/05_Material/CodeSnaps/time4.png" style="height: 60vh; padding-left: 70vh;">
 </p>

- The time complexity of **T=2n** and **T=cn** both are same even c = 100000000000 Consuming part is n
so 
  Time Complexity =O(n)
./automateGit.sh "Added:Time Complexity"