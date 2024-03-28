# Arrays

> An array in `C++` is a collection of elements of the _same data type_, stored in _contiguous memory locations_. The elements can be accessed by their `index`, which is a numerical value that corresponds to the position of the element in the `array`.

## What does array name means?

<p align="center">
    <img src="/05_Material/CodeSnaps/array-6.png" style="height: 30vh; padding-left: 40vh;">
    
</p>

`arr` is a variable of type `int*` **(pointer to int)**, which holds the memory address of the first element of an array. The variable arr can be used to access the elements of the array, for example, you can use `arr[i]` or `i[arr]` to access the **i-th** element of the array or `*(arr+i)` to access the **i-th** element of the array. Also you can use pointer arithmetic to move through the `array`, for example `arr + 2` will point to the third element of the array

## What does &array name means?

<p align="center">
    <img src="/05_Material/CodeSnaps/&arr.png" style="height: 30vh; padding-left: 30vh;">
    
</p>

`&arr` is a variable of type int `(*)[5]`, which holds the memory address of the **entire array**. The variable `&arr` can be used to get the size of the `array`. However, you cannot access the elements of the `array` using `&arr` directly, instead you need to use `&arr[i]` to access the **i-th** element of the array. Also you can't use pointer arithmetic to move through the `array`, for example `&arr + 2` will not point to the third element of the array.

## The difference between arr and &arr

It is important to note that when `arr` is used in an expression, it is implicitly converted to a **pointer to the first element** of the array, which is why it has the same memory address as `&arr[0]`. Similarly, when `&arr` is used in an expression, it is implicitly converted to a **pointer to the array**, which is why it has the **same memory address** as arr. However, when you use `*(arr)` it will give you the value of the first element of the array, and when you use `*(&arr)` it will give you the entire array.

<p align="center">
    <img src="/05_Material/CodeSnaps/array-7.png" style="height: 30vh; padding-left: 40vh;">
    
</p>

The variable `arr` is an array of integers with a size of 5. It is an `lvalue`, meaning it can be used on the left side of an assignment. `&arr` is a pointer to the array object, an `rvalue` with the value of the memory address of the array. They point to the same location in memory. To differentiate, compare `*(arr)` and `*(&arr)`. The first is an `lvalue` of type int and the second an `lvalue` of type int [5].

In **summary**, `arr` and `&arr` are **different variables** with **different types** and behaviors, `arr` is a pointer to the first element of the array and &arr is a pointer to the entire array, they may have the same memory address but you can't use them in the same way.

### Task for You?
>Run it in your compiler for further clarification

**std::cout << *(arr+1) << std::endl;**

**std::cout << *(&arr+1) << std::endl;**


<p align="center">
    <img src="/05_Material/CodeSnaps/arrayoutside.png" style="height: 70vh; padding-left: 90vh;">
    
</p>

## calculating size of array

There are two ways to calculate the size of an array

- Dividing the total size of the array by the size of the first element **sizeof(arr)/sizeof(arr[0])**. This method is widely used.
- Subtracting the memory address of the last element of the array from the memory address of the first element: **\*(&arr+1)-arr**.

## Array with pointers

<p align="center">
    <img src="/05_Material/CodeSnaps/array-8.png" style="height: 30vh; padding-left: 40vh;">
    
</p>

## Arrays with functions

<p align="center">
    <img src="/05_Material/CodeSnaps/array-9.png" style="height: 60vh; padding-left: 70vh;">
    
</p>

> When using the `pointer ptr` to access elements of the array, adding 1 to it does not increment the memory address by 1 byte, but rather by the size of the data type of the array (in this case, an int). So when we say ptr + 1, it's equivalent to accessing the memory location that is 1 \* sizeof(int) bytes away from the original memory location of ptr.

### Bonus Point

When an `array` is passed as a parameter to a function, a `pointer` to the first element of the `array` is created, which occupies **actual memory**. In the main function, the `array`(means array name ,i.e arr) itself does not occupy memory, but in a **user-defined function**, the pointer to the array does occupy memory. Therefore, the size of the array may not be correctly determined in a user-defined function by `sizeof(arr)/sizeof(arr[0])` because arr is a `pointer` with actual memory ).

## Types of Arrays

1. [Fixed-size arrays](/01_Data%20Structures/Linear-Data-Structures/01_Array/Static-array/Readme.md)
2. [Dynamic arrays](/01_Data%20Structures/Linear-Data-Structures/01_Array/Dynamic-array/Readme.md)

## Sorting Algorithms

1. [Bubble Sort](/01_Data%20Structures/Linear-Data-Structures/01_Array/Code/bubble-sort.cpp)
2. [Selection Sort](/01_Data%20Structures/Linear-Data-Structures/01_Array/Code/selection-sort.cpp)
3. [Insertion Sort](/01_Data%20Structures/Linear-Data-Structures/01_Array/Code/insertion-sort.cpp)

## Searching in Array

- [Linear search](/01_Data%20Structures/Linear-Data-Structures/01_Array/Code/linear-search.cpp)
- [Binary search](/01_Data%20Structures/Linear-Data-Structures/01_Array/Code/binary-search.cpp)

## Unusual Things

1. It is not possible to determine the size of a `static array` at **runtime** using the traditional method, however, using the concept of a `constant array size`, the size of a `static array` can be obtained during **runtime**. This allows for the `dynamic allocation of memory` for a `static` array, enabling its size to be determined and modified at **runtime**.

<p align="center">
    <img src="/05_Material/CodeSnaps/array-11.png" style="height: 30vh; padding-left: 40vh;">
    
</p>

2. When **declaring** an `array`, it is possible to initialize specific elements of the array at that time by using the syntax of **assigning** a value to a specific index of the array. This allows for more flexibility in initializing arrays and can be useful in certain situation.

<p align="center">
    <img src="/05_Material/CodeSnaps/array-13.png" style="height: 40vh; padding-left: 40vh;">
    
</p>

3.  It is also possible to initialize an array in a more concise way, by omitting the `=` sign while providing the values to be assigned to the `array`. This method is called **uniform initialization** . This way of initializing an array is considered to be more readable and can make the code more expressive. It is important to note that this method of **initialization** is only supported in `C++11` and later versions.

<p align="center">
    <img src="/05_Material/CodeSnaps/array-14.png" style="height: 40vh; padding-left: 40vh;">
    
</p>

4. In the context of a **symbol table**, the reason why we can't do arr++.The **symbol table**, which is used by the compiler to keep track of `variables` and their `types`, does not contain information about the specific memory addresses of variables, but rather their types and scope.

<p align="center">
    <img src="/05_Material/CodeSnaps/array-15.png" style="height: 40vh; padding-left: 40vh;">
    
</p>
