# Pointers

### Introduction to pointers.

Variables that store address of another variable.

A simple implementation:

```c++
int a; // A normal declaration.
int *p; // Declaring a pointer variable.
p = &a; // Storing the address of a in p.

// Here, if we try to print *p. It will print the value of the address it is pointed to.
```

> Checkout /pointers/intro.cpp for the code snippets.

### Working with pointers.

`Pointer Arithmetic`

Basically, it is a method to increase or add some value to the address of the pointer.

Basic code:

```c++
int a = 10;
int *p;
p = &a;

p + 1 // this will actually increase the address value of p by 4 because of the datatype.

p + 2 // similarly, this will give us +8 value of the actual address.

*(p+1) // if we try to manipulate values of a like this, we will get some garbage value because no value has been assigned to (p+1) address.
```

> Checkout /pointers/ii_working.cpp for the code snippets.

### Pointer types, void pointer, pointer arithmetic

It turns out that we can typecast the pointer variables to our own desired datatypes. And there is something very strange that is called a void or a generic pointer that has no datatype aka the datatype of a generic pointer is `void`.

Here is the code.

```c++
int a = 10;
int *p;
p = &a;

char *p0;
p0 = (char *)p; // This is called pointer typecasting.

// Let's discuss about the generic pointers.

void *p2;
p2 = p0;

// We can only deal with the address part of the pointer and can not perform any arithmetic pointer operations onto it. It's a bit strange but we will see the use cases of these generic pointers in the upcoming lessons.
```

> Checkout /poiners/iii_types.cpp for code snippets.

### Pointer to pointer

This is a mess.

It turn out to be that we can point pointer to a different pointer and that pointer to maybe some another pointer and can go like that to infinity.

Damn! Here are some code snippets:

```c++
int x = 5;
int* p = &a; // So, p stores the address of a.

*p = 6; // We change the value of a by 6.

int** q = &p; // Now, q stores the address of p.
int*** r = &q; // Now, r stores the address of q.

// If we de-reference it.

*p // This will store the value of (a).
*q // This will store the value of (p).
*(*q) // (*q) will store the value of p and *(*q) will store what the value p (as a address) is storing in itself i.e., 6
*(*(*r)) // (*r) will store the value of q and *(*r) will store what the value (as a address) of q is storing let say x and *(*(*r)) will store what x is storing in itself i.e., 6.

// Consider this like that:

int***** x = &w;

*x // This will store the value of w.
**x // This will store what the value of w as a address is storing in itself.
.
.
.
*****x // This will give the final value.
```

> Checkout /pointers/iv_point2point.cpp for code snippets.

_Don't worry we will see the use-cases of pointer-to-pointer in the upcoming project sections._

### Poiners as functions arguments - call by reference

So, its pretty cool actually.

Basically, it has two major components that needs to be understood here. One, is that its just implementing and using de-referencing with user-defined functions and the second, is that instead of passing the normal variables as the arguments we pass the address of the variables.

> Checkout /pointers/v_call.cpp for code snippets.

### Pointers and Arrays

So, its pretty cool as well. I am finally learning some unknown stuff about c++.

So, it turns out that we can access arrays simply by pointer reference. I am not going to talk much about it.

> Checkout /pointers/vi_arr.cpp for code snippets.

### Arrays as function arguments

Basically, it tells how to use arrays as functional arguments with pointers logic.

This tells is the arrays are always `call-by-reference` and not the call-by-value.

> Checkout /pointers/vii_arrarg.cpp for code snippets.

### Character arrays and pointers - part 1

`Character arrays == strings`
`Size of array >= no. of characters in string + 1`
Null character: `\0`

1. Arrays and pointers are different types that are used in similar manner.
2. Arrays are always passed to function by reference.

> Checkout /pointers/viii_str.cpp for the code snippets.

### Character arrays and pointers - part 2

It was simple, just talked about how we can make something constant with the `const` keyword and restrict the modification on that variable.

> Checkout /pointers/ix_str2.cpp for code snippets.

### Pointers and multi-dimensional arrays

So, this is basically pointers concept in 2D arrays.

Let's understand the code:

```c++
int B[2][3] // So, this is basically a 2D array of 2 integers.

int *p[3] = B; // will return a pointer to 1D array of 3 integers.
// it is strange but the good thing is that we only need this pointer to get all the other values of the 2D arrays.

B or &B[0] // this will contain the base address of B[0] => 1D array of 3 integer. let's say it is 400.
*B or B[0] or &B[0][0] // This will return the same thing as above.
B + 1 // This is 400 + size of 1D array of 3 integers. This will give 412.
*(B + 1) or B[1] or &B[1][0] // This will return the same thing as above.
*(B + 1) + 2 or B[1] + 2 or &B[1][2] // This is basically pointer arithmetic. 412 + 8 = 420.
*(*B + 1) // The key is to go step-by-step. Here, *B is basically B[0] which is 400 and we then perform pointer arithmetic to is adding 4, 400 + 4 = 404 and then its basically *(404) => which is the value address 404 contains.

// Also.

B[i][j] = *(B[i] + j) == *(*(B + i) + j) //  These all means the same thing.
```

`Let's do part 2 of this topic now.`

Let's do 3D arrays now.

```c++
int c[3][2][2]

int *p[2][2] = C;

C or *C or C[0] or &C[0][0] // This will give the base address.


// Similarly
C[i][j][k] = *(C[i][j] + k) = *(*(C[i] + j) + k) = *(*(*(C + i) + j) + k) // These all means the same thing.

// Consider the above example like this:
// mlist = [
//     [
//         [1, 2],
//         [3, 4]
//     ],
//     [
//         [5, 6],
//         [7, 8]
//     ],
//     [
//         [9, 0],
//         [2, 4]
//     ]
// ]

*(C[0][1] + 1) or C[0][1][1] // For this get the base address of C[0][1] and then do the pointer arithmetic and then resolve the value from the address.
*(C[1] + 1) or C[1][1] or &C[1][1][0] // These all are similar. => This will give the address.
```

We can pass the multi-dimensional array as arguments for functions like this:

```c++

void Func(int *A); // 1D
void Func1(int *A[5]); // 2D
void Func2(int *A[3][3]); // 3D

int main()
{
    int A[2];
    int B[3][5];
    int C[2][3][3];
}
```

### Pointers and dynamic memory - stack vs heap

Basically, we learn about heap data structure.

We need to know about 4 functions and 2 operators.

- C: (functions)
  1. malloc
  2. calloc
  3. realloc
  4. free
- C++: (operators)
  1. new
  2. delete

Here is the C++ style code.

```c++
#include <iostream>

using namespace std;

int main()
{
    int a; // goes on stack
    int *p;
    p = new int; // goes on heap
    *p = 10; // here, we are putting value to that pointer variable
    delete p; // here, we are releasing the memory from the heap so that it won't get cluttered.
    p = new int[20]; // here, we are creating array and p will point to the base address of that array and we can access things like P[0], P[1] or *P, *(P + 1)
    delete[] p; // this will release the entire memory of array
}
```

Heaps are useful when it comes to efficient memory management.

### Dynamic memory allocation in C - malloc calloc realloc free

We will see how we can allocate block of memory in heap with functions like `malloc`, `calloc`, `realloc` and `free`. Using the C programming language.

```c
malloc = void* malloc(size_t size) // Here, void * is is the void or generic pointer and size_t is the unsigned integer and size is the size of data type in bytes.
calloc = void* calloc(size_t num, size_t size) // Here, num is the number elements and size is the size of data type in bytes.
realloc = void* realloc(void* Ptr, size_t size) // To realloc a memory of a block.
```

_Only implemented with C._

> Checkout /pointers/x_memo.c for the code snippets.
