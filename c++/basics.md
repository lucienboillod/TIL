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
