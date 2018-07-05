Reference
---------

Type& name

ex: int a = 5;
    int& ra = a;

Kind of safe-pointer, it can be seen as a alias to a variable. It is a const pointer since it can reference only one variable and any futher modification will affect only the variable content, we cannot reaffect a reference nor know the adress, &var will show the adress of the object of var. References cannot be null, nor uninitialized.

Mostly use to pass function arguments as reference.

We can use const reference in function result to avoid copy.