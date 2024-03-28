# Character Array
A character array is a data structure in C programming that is used to store a sequence of characters. 


<p align="center">
    <img src="/05_Material/CodeSnaps/array-10.png" style="height: 30vh; padding-left: 40vh;">
    
</p>

## what does arr means?
The behavior of the `cout` statement when used with an `integer array` and a `character array` is different. When used with an `integer array`, the `cout` statement will print the address of the first element of the array. However, when used with a character array, the `cout` statement will print the entire array as a string, including all the characters until a `null character ('\0')` is encountered. This is because the `<< operator` is overloaded for the `character array` in the **iostream** header file to automatically treat it as a string.

In other words, when the` cout<<arr` is used on an integer array, it will print the memory location of the first element of the array, while `cout<<arr` on a character array will print the entire string stored in the array up to the null character.