# Fixed-size arrays
> It is also known as `static arrays`, have a set size that cannot be changed during runtime.

## 1D Static Array

<p align="center">
    <img src="/05_Material/CodeSnaps/array-1.png" style="height: 40vh; padding-left: 50vh;">
    
</p>


## 2D Static Array

<p align="center">
    <img src="/05_Material/CodeSnaps/array-4.png" style="height: 30vh; padding-left: 40vh;">
    
</p>


 ## Advantages of Static Array

 - Memory allocation for a static array is done at compile-time, which means that the size of the array is fixed and known at the time of compilation. This allows for efficient memory usage and fast access to elements within the array.

- Because the size of a static array is known at compile-time, it can be easily passed as a function parameter and its memory can be allocated on the stack, making it faster and less resource-intensive than dynamic arrays.


 ## Disadvantages of Static Array
- **Fixed size**: Once the size of a static array is defined, it cannot be changed at runtime. This can lead to wasted memory if the array size is larger than needed, or a lack of memory if the array size is smaller than needed.

- **Inefficiency in memory usage**: Static arrays take up a fixed amount of memory, regardless of how much of it is actually being used. This can lead to inefficiency in memory usage, as the program may be using more memory than necessary.


