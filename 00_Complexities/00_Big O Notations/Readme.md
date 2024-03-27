# Big O Notation

**Big O notation**  is a way of measuring the `performance` of an `algorithm` or data structure, specifically the time complexity or the amount of resources (such as memory) used. The notation describes how the `runtime` of an algorithm or the amount of resources used by a data structure `grows` in relation to the `size of the input` i.e. it describes the worst-case scenario for the number of operations an algorithm will perform, and is often used to compare the efficiency of different algorithms.The amount of time, storage, and other resources required to perform an algorithm determine its **efficiency**.

# Representation
It's usually **represented** with the letter `"O"` followed by a function that describes the growth of the runtime or resources used. For example, O(1) means the algorithm or data structure has a constant runtime or resource usage, regardless of the size of the input. O(n) means the runtime or resource usage grows linearly with the size of the input(best case scenario), and O(n^2) means the runtime or resource usage grows quadratically with the size of the input(worst case scenario).

# Advantages of Big O Notation
- When examining the efficiency of an algorithm using run-time inputs, **asymptotic analysis** is quite useful. Otherwise, if we do it manually with passing test cases for various inputs, performance may vary as the algorithm's input changes.

- When the algorithm is executed on multiple computers, its `performance varies`. As a result, we pick an algorithm whose performance does not change much as the number of inputs increases. As a result, a mathematical representation provides a clear understanding of the top and lower boundaries of an algorithm's run-time.
# Examples of common Big O complexities

Here are a few examples of common time complexities:

- `O(1)` : **constant time**, for example, accessing an element in an array by its index or checking if a number is even or odd.
- `O(log n)` : **logarithmic time**, for example, searching for an element in a sorted array using binary search.
- `O(n)` : **linear time**, for example, searching for an element in an unsorted array by checking each element one by one(linear search).
- `O(n log n)` : **log-linear time**, for example, sorting an array using merge sort,heap sort or quick sort.
- `O(n^2)` : **quadratic time**, for example, sorting an array using bubble sort or insertion sort.
- `O(2^n)` : **exponential time**, for example, generating all subsets of a set, Tower of Hanoi.
- `O(n!)` : **factorial time**, for example, generating all permutations of a set, Brute force Search algorithm for Traveling Salesman Problem. 
<br>
<br>
<br>


![Big O Graph](https://media.geeksforgeeks.org/wp-content/cdn-uploads/mypic.png)
        When n is the input size and c is a positive constant

<br>

# Best and worst case
It's important to note that Big O notation describes the `worst-case scenario` for an algorithm. However, there are also **best-case scenarios**, which are denoted using the `notation Ω(n)`. For example, an algorithm with a best-case time complexity of Ω(1) will always perform a constant number of operations, regardless of the input size.

The **average case** of an algorithm is usually denoted by `Theta (Θ) notation`.

# Note
It's important to note that Big O notation describes the worst-case scenario, and the actual performance of an algorithm or data structure may be better in some cases.

Big O notation is a powerful tool for **analyzing** `algorithms and data structures`, and it allows you to quickly compare the performance of different approaches and make informed decisions about which one to use for a specific problem.

# Conclusions
Big O notation is a useful tool for analyzing and comparing the performance of different algorithms. By understanding the time complexity of an algorithm, we can make `informed decisions` about which algorithm to use for a given problem. However, it's important to keep in mind that Big O notation only describes the worst-case scenario, and there may be **other factors** to consider when choosing an algorithm.
```