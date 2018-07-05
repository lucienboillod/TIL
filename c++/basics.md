# The basics

Reference
---------

``` c++
Type& name
```
**example**: 
``` c++
int a = 5;
int& ra = a;
```

Kind of safe-pointer, it can be seen as an alias to a variable. It is a const pointer since it can reference only one variable and any futher modification will affect only the variable content, we cannot reaffect a reference nor know the adress, &var will show the adress of the object of var. References cannot be null, nor uninitialized.

Mostly use to pass function arguments as reference.

We can use const reference in function result to avoid copy.

Inlining
--------

``` c++
inline int add(int a, int b)
{ return (a + b); };
```

Inline function are mostly like macro function in C, but it is just a **suggestion**. Compiler may replaces the definition of inline functions at compile time instead of referring function definition at runtime (be careful: compiler is not forced to do this, if function is big for example, compiler can ignore the inline request).

Inlining is used to speed up runtime by avoiding function calling overhead and let the compiler do some in-place optimizations, but it is not obvious and not systematic, and sometimes it can even slow the program: too many inline function can lead to too many virtual memory access, so if the executable size is really big, system can spend a lot of time doing pagination and then slow the execution.

Inlining increases executable size, but it specific cases it can also decreases his size: with very small function, compiler may generate more code to stack/unstack parameters. Even with some big functions, compiler can sometimes optimize and delete a lot of code through inlining.

There is no simple answer with inlining, it can increase aswell as decrease the performances, it depends of the use.


Class notions
-------------

OOP is a way to structure an application by grouping data and algorithms within a single entity: the *object*.
A *class* is a kind of model declaring common properties. *Objects* are instances of the class.

#### Structure

``` c++
class ClassName
{
public:
    ClassName(); // constructor
    ~ClassName(); // destructor
    
    // member functions
    
private:
    // attributes
};
```

**Member function** is a function linked to a class and used to access the object's data or modify the behavior of the object (modify his attributes for example).
