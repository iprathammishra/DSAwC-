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
