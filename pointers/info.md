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
