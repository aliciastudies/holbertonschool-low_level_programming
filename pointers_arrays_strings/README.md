# LEARNING OBJECTIVES

- **What are pointers and how to use them**

Pointers are variables that store memory addresses and allow indirect access to data by refering to the memory location of where the data is stored.
`int num = 42;`
`int *ptr = &num;`

- **What are arrays and how to use them**

Arrays are a collection of same-data-type elements stored in sequential memory locations. They provide a way to store and access multiple elements using a single name and index.
`int arr[1];`
`arr[0] = 10;`
`arr[1] = 20;`


- **What are the differences between pointers and arrays**

`int *ptr;` holds memory address, needs explicit assignment of a memory address, moves around in memory.
`int arr[];` are a collection of elements stored together, can be initialised with a list of values, are fixed and can't be directly manipulated like pointers.'


- **How to use strings and how to manipulate them**

C doesn't technically have strings. They are an array of char with null char `\0` to mark the end. They can be manipulated with arrays and pointers.


- **Scope of variables**

It defines where in the code a variable can be accessed and used.

**Global variables** are accessible from anywhere in the program.

**Local variables** are limited to the block or function they are declared in.

**Block scope** refers to variables declared within loops or conditional statements and are only accessible inside that block.
