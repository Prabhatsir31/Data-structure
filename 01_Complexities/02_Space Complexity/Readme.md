# Space Complexity

> `space complexity` is a measure of how much memory a program or algorithm uses as the size of the input increases. It's often expressed as a function of the input size, such as `O(n)` or `O(n^2)`, where n is the size of the input.

## Expressing Space Complexity

The most common way to express `space complexity` is using **big O notation**. The **big O notation** is used to express the upper bound on the space complexity of an algorithm. For example, an algorithm with a `space complexity` of `O(n)` uses at most a linear amount of memory with respect to the input size n. An algorithm with a `space complexity` of `O(n^2)` uses at most a quadratic amount of memory with respect to the input size n.

## Factors Affecting Space Complexity

- The Data Structures used
- The number of variables and objects created
- The use of recursion

### Data Structures

One of the most basic ways to understand `space complexity` is to consider the **size** of the `data structures` used in the program.


<p align="center">
    <img src="/05_Material/CodeSnaps/spacecomplexity-1.png" style="height: 30vh; padding-left: 40vh;">
    
 </p>


In this example, the `space complexity` is `O(1)` because the **size** of the array is **fixed**, and it does not depend on the **size** of the input. Here, the array is defined with a fixed **size** of 10 elements, so the `space complexity` of this program is **constant**.


<p align="center">
    <img src="/05_Material/CodeSnaps/spacecomplexity-2.png" style="height: 40vh; padding-left: 50vh;">
    
 </p>


In this example, the `space complexity` is `O(n)` where n is the number of elements in the `linked list`. This is because the amount of memory required for the `linked list` increases as the number of elements increases. Each element in the linked list requires memory for the **data** and the **pointer** to the next element, and the amount of memory required is directly proportional to the number of elements

### Number of variables and objects


<p align="center">
    <img src="/05_Material/CodeSnaps/spacecomplexity-3.png" style="height: 30vh; padding-left: 40vh;">
    
</p>



In this example, the function creates 1000 integer variables, each taking up `sizeof(int)` bytes of memory. The `space complexity` of this function is O(n), where n is the number of variables created, in this case, n = 1000.



<p align="center">
    <img src="/05_Material/CodeSnaps/spacecomplexity-4.png" style="height: 30vh; padding-left: 40vh;">
    
</p>



In this example, the function creates n objects of **SomeClass**, each object takes up `sizeof(SomeClass)` bytes of memory. The `space complexity` of this function is `O(n)`, where n is the number of objects created.

#### Special Reminder👀

> It's worth noting that the amount of memory required by an object can be affected by the size of its **data members** and the **memory allocation strategy**. For example, if the SomeClass object is created dynamically using `new operator`, it will require additional memory for the **pointer**.

### Affect by recursion

> Recursion can also have a significant impact on `space complexity`. Each **recursive call** adds a new level to the **call stack**, which requires additional memory. The space complexity of a recursive algorithm is usually expressed as `O(n)` where n is the maximum depth of the `recursion`


<p align="center">
    <img src="/05_Material/CodeSnaps/spacecomplexity-5.png" style="height: 70vh; padding-left: 80vh;">
    
 </p>

 
In this example, the `space complexity` is `O(n)`, where n is the input parameter passed to the factorial function. This is because each **recursive call** creates a new level on the **call stack**, and the maximum depth of the recursion is equal to the input parameter.

### Bonus Point

`Space complexity` can be affected by the use of `pointers` and `references`, which are used to store the memory addresses of variables and objects. While they can improve memory usage by reducing the need for duplicate data, they can also increase the `space complexity` as they require additional memory to store the memory addresses. To improve the `space complexity`, one can use **smart pointers** or `stack-allocated objects`, and be mindful of **avoiding memory leaks** when using `dynamically allocated objects`.

## Finishing Touches

It is important to remember that while `space complexity` is an important factor to consider in **algorithm design** and **optimization**, it is not the only one. Other aspects such as `time complexity`, `scalability`, and `maintainability` must also be taken into account when selecting the optimal algorithm for a given problem. Additionally, it is important to optimize the overall performance of the algorithm by balancing the trade-offs between different factors such as `space and time complexity`, while also keeping in mind the **constraints** of the **specific problem**.
